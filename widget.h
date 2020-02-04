#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPalette>
#include <QBrush>
#include <QImage>
#include <QMouseEvent>
#include <QPoint>
#include <QBitmap>
#include <QDesktopWidget>
#include <QMenu>
#include <QAction>
#include <QSystemTrayIcon>
#include <QProcess>
#include <QMediaPlayer>
#include <QMediaResource>
#include <QUrl>
#include <QDir>
#include <Qtime>
#include <QTimer>
#include <synchapi.h>
#include <QtGlobal>
#include <QResource>
#include "globaldef.h"
#include "role.h"
#include "roleselection.h"
#include "windowsetup.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

protected:
    void mouseMoveEvent(QMouseEvent* event);
    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);

private slots:
    void on_Widget_customContextMenuRequested(const QPoint &pos);

private:
    Ui::Widget *ui;
    int WindowWidth;
    int WindowHeight;
    bool Moving;          //控制移动
    bool AudioPlaying;    //控制语音
    bool MousePressing;   //控制鼠标按键
    QPoint LastPos;       //鼠标上一次位置
    QSystemTrayIcon* Icon;//右下角小图标
    QMediaPlayer* Player;   //播放音频
    QTimer* Timer;        //定时器
    Role* CurRole;        //当前角色
    RoleSelection* RoleSelectionWindow;//选择角色窗口
    WindowSetUp* SetUpWindow;
    void InitClassVariable();
    void InitWindowUI();
    void CloseAllObject();
    void playAudio(AudioDef audio);
    void Animation();
    void ShowAudioText(AudioDef audio);
    void ShowAudioTextPlayAudio(AudioDef audio);
    void ChangeRole(RoleDef role);
    AudioDef ChatType();
    //槽函数
    void onTaskBoxContextMenuEvent();
    void onIconActivated(QSystemTrayIcon::ActivationReason reason);
    void onIconMessage();
    void onIconBoxContextMenuEvent();
    void onTimerEvent();
    void onChangeWindowSize(int height);
};

#endif // WIDGET_H
