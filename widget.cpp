#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget),Moving(false)
{
    ui->setupUi(this);
    QResource::registerResource(ImagesResourcePath);//加载资源文件
    QResource::registerResource(AudioResourcePath);//加载资源文件
    InitClassVariable();
    InitWindowUI();
    playAudio(AudioDef::Open);
}

Widget::~Widget()
{
    delete RoleSelectionWindow;
    delete Icon;
    delete ui;
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    if(Moving&&
            (event->buttons()&&Qt::LeftButton)&&
            (event->globalX()>=this->x())&&
            (event->globalX()<=(this->x()+this->width()))&&
            (event->globalY()>=this->y())&&
            (event->globalY()<=(this->y()+this->height()))
            ){
        move(event->globalPos()-LastPos);
        LastPos = event->globalPos()-pos();
        MousePressing=true;
    }else{
        Moving=false;
    }
    QWidget::mouseMoveEvent(event);
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    if((event->buttons()==Qt::LeftButton)){
        Moving=true;
        LastPos = event->globalPos()-pos();
    }
    QWidget::mousePressEvent(event);
}

void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    if((event->button()==Qt::LeftButton)){
        Moving=false;
        if(!AudioPlaying&&!MousePressing){
            ShowAudioTextPlayAudio(ChatType());
            Animation();
        }
        MousePressing=false;
    }
}

void Widget::InitClassVariable()
{
    WindowWidth=ui->lab_background->width();
    WindowHeight = ui->lab_background->height();
    Player = new QMediaPlayer(this);
    Player->setVolume(100);
    AudioPlaying = false;
    MousePressing = false;
    Timer = new QTimer(this);
    connect(Timer,&QTimer::timeout,this,&Widget::onTimerEvent);
    CurRole = new Role();
    RoleSelectionWindow = new RoleSelection();
    connect(RoleSelectionWindow,&RoleSelection::RoleChange,this,&Widget::ChangeRole);
//    SetUpWindow = new WindowSetUp();
//    connect(SetUpWindow,&WindowSetUp::ChangeWindowSize,this,&Widget::onChangeWindowSize);
}

void Widget::InitWindowUI()
{
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::SubWindow);
    this->setAttribute(Qt::WA_QuitOnClose);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->move(QApplication::desktop()->screenGeometry().width()-this->width(),0);
    //set this->ui
    ui->frame->setVisible(false);
    ChangeRole(RoleDef::blbl22);

    //创建右下角图标并添加右键菜单
    QMenu* trayIconMenu = new QMenu(this);
    QAction* pAction = new QAction(tr("关闭"),this);
    pAction->setData(RightClickEenuDef::WindowClose);
    connect(pAction,&QAction::triggered,this,&Widget::onIconBoxContextMenuEvent);
    trayIconMenu->addAction(pAction);
    Icon = new QSystemTrayIcon();
    Icon->setIcon(QIcon(":/images/icon/22icon.ico"));
    Icon->setContextMenu(trayIconMenu);
    Icon->show();
    connect(Icon,&QSystemTrayIcon::activated,this,&Widget::onIconActivated);
    connect(Icon,&QSystemTrayIcon::messageClicked,this,&Widget::onIconMessage);

    ui->frame->setStyleSheet("border-image: url("+UIResources::UITextborder+")");
    ui->tEd_Text->setStyleSheet("border-image:url("+UIResources::UITextBackground+");"
                                "color:white");
}

void Widget::CloseAllObject()
{
    RoleSelectionWindow->close();
    this->close();    
}

void Widget::playAudio(AudioDef audio)
{
    AudioPlaying=true;
    Player->setMedia(QUrl(CurRole->GetRoleAudio(audio)));
    Player->play();
    Timer->start(1000);
}

void Widget::Animation()
{
    for(int i=0;i<20;++i){
        ui->lab_background->move(ui->lab_background->x(),ui->lab_background->y()-1);
        Sleep(5);
        qApp->processEvents();
    }
    for(int i=0;i<20;++i){
        ui->lab_background->move(ui->lab_background->x(),ui->lab_background->y()+1);
        Sleep(5);
        qApp->processEvents();
    }
}

void Widget::ShowAudioText(AudioDef audio)
{
    ui->frame->setVisible(true);
    ui->tEd_Text->setText(CurRole->GetRoleAudioText(audio));
    ui->tEd_Text->setEnabled(false);
    qApp->processEvents();
}

void Widget::ShowAudioTextPlayAudio(AudioDef audio)
{
    Moving=false;
    ShowAudioText(audio);
    playAudio(audio);
}

void Widget::ChangeRole(RoleDef role)
{
    CurRole->SetRole(role);
    QString path = CurRole->GetRoleBackgroundImage();
    QPixmap Background(path);
    QPixmap ChangeBackground = Background.scaled(ui->lab_background->width(),ui->lab_background->height(), Qt::IgnoreAspectRatio);
    ui->lab_background->setPixmap(ChangeBackground);
    ShowAudioTextPlayAudio(AudioDef::Open);
}

AudioDef Widget::ChatType()
{
    AudioDef audio;
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    int type =qrand()%3;
    switch (type) {
    case 0:
        audio = AudioDef::Chat1;
        break;
    case 1:
        audio = AudioDef::Chat2;
        break;
    case 2:
        audio = AudioDef::Chat3;
        break;
    }
    return audio;
}

void Widget::on_Widget_customContextMenuRequested(const QPoint &pos)
{
    Q_UNUSED(pos);
    //创建菜单对象
    QMenu *pMenu = new QMenu(this);
    QAction *pWindowAction = new  QAction(tr("计算器"),this);
    pWindowAction->setData(RightClickEenuDef::Calculator);
    pWindowAction->setIcon(QIcon(":/images/icon/icoCalculator.ico"));
    pMenu->addAction(pWindowAction);//把QAction对象添加到菜单上
    connect(pWindowAction,&QAction::triggered,this,&Widget::onTaskBoxContextMenuEvent);//连接鼠标右键点击信号

    pWindowAction = new QAction(tr("选择角色"), this);
    pWindowAction->setData(RightClickEenuDef::OpenRoleSelectionWindow);
    pMenu->addAction(pWindowAction);
    connect(pWindowAction,&QAction::triggered,this,&Widget::onTaskBoxContextMenuEvent);

    pWindowAction = new QAction(tr("设置"), this);
    pWindowAction->setData(RightClickEenuDef::OpenSetUpWindow);
    pMenu->addAction(pWindowAction);
    connect(pWindowAction,&QAction::triggered,this,&Widget::onTaskBoxContextMenuEvent);

    pWindowAction = new QAction(tr("关闭"), this);
    pWindowAction->setData(RightClickEenuDef::WindowClose);
    pMenu->addAction(pWindowAction);
    connect(pWindowAction,&QAction::triggered,this,&Widget::onTaskBoxContextMenuEvent);

    //在鼠标右键点击的地方显示菜单
    pMenu->exec(cursor().pos());
    //删除对象
    QList<QAction*> list = pMenu->actions();
    foreach (QAction* pAction, list) delete pAction;
    delete pMenu;
}

void Widget::onTaskBoxContextMenuEvent()
{
     QAction *pEven = qobject_cast<QAction *>(this->sender()); //this->sender()就是发信号者 QAction
     int iType = pEven->data().toInt();
     switch (iType) {
     case RightClickEenuDef::Calculator:{
         QProcess *poc = new QProcess;
         poc->start("C:\\Windows\\system32\\calc.exe");
         //ChangeRole(RoleDef::kulasuo);
         break;
     }
     case RightClickEenuDef::OpenRoleSelectionWindow:{
         RoleSelectionWindow->show();
         break;
     }
     case RightClickEenuDef::OpenSetUpWindow:{
         //SetUpWindow->show();
         break;
     }
     case RightClickEenuDef::WindowClose:{
         CloseAllObject();
         break;
     }
     default:
         break;
     }
}

void Widget::onIconActivated(QSystemTrayIcon::ActivationReason reason)
{
    //图标活动
    switch(reason)
    {
    case QSystemTrayIcon::Trigger :
        setWindowState(Qt::WindowActive);
        activateWindow();
        break;
    default:
        break;
    }

}

void Widget::onIconMessage()
{
    qDebug()<<"onIconMessage";
}

void Widget::onIconBoxContextMenuEvent()
{
    QAction* pEven = qobject_cast<QAction*>(this->sender());
    int iType = pEven->data().toInt();
    switch (iType) {
    case RightClickEenuDef::WindowClose:{
        CloseAllObject();
        break;
    }
    default:
        break;
    }
}

void Widget::onTimerEvent()
{
    if(Player->state()==QMediaPlayer::StoppedState){
        ui->frame->setVisible(false);
        AudioPlaying=false;
        Timer->stop();
    }
}

void Widget::onChangeWindowSize(int height)
{
    double Proportion = (double)height/(double)WindowHeight;
    int Width = WindowWidth*Proportion;
    QString path = CurRole->GetRoleBackgroundImage();
    QPixmap Background(path);
    QPixmap ChangeBackground = Background.scaled(Width,height, Qt::IgnoreAspectRatio);
    ui->lab_background->setPixmap(ChangeBackground);

    ui->frame->setFixedSize(ui->frame->width()*Proportion,ui->frame->height()*Proportion);
    ui->tEd_Text->setFixedSize(ui->tEd_Text->width()*Proportion,ui->tEd_Text->height()*Proportion);
}
