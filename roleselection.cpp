#include "roleselection.h"
#include "ui_roleselection.h"

RoleSelection::RoleSelection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RoleSelection)
{
    ui->setupUi(this);
    InitClassVariable();
    InitWindowUI();
}

RoleSelection::~RoleSelection()
{
    delete ui;
}

void RoleSelection::InitWindowUI()
{
    //tihs
    this->setWindowFlags(Qt::Tool);
    ui->btn_ALUpPage->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonUpPage+");}"
                                    "QPushButton:hover{border-image:url("+UIResources::UIButtonUpPageHover+");}"
                                    "QPushButton:pressed{border-image:url("+UIResources::UIButtonUpPagePressed+");}");
    ui->btn_ALNextPage->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonNextPage+");}"
                                      "QPushButton:hover{border-image:url("+UIResources::UIButtonNextPageHover+");}"
                                      "QPushButton:pressed{border-image:url("+UIResources::UIButtonNextPagePressed+");}");
    ui->btn_ALBaiYing->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonCurrentPage+");}");
    ui->btn_ALChongYing->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonPage+");}");
    ui->btn_ALHuangJia->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonPage+");}");
    ui->btn_ALTieXue->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonPage+");}");
    //bilibili
    ui->btn_22->setStyleSheet("QPushButton{border-image:url("+BiLiBiLi::bl22::HeadImagePath+");}");
    //AzurLane
    ui->btn_biruishuiyi->setStyleSheet("QPushButton{border-image:url("+AzurLane::biruishuiyi::HeadImagePath+");}");
    ui->btn_dadi->setStyleSheet("QPushButton{border-image:url("+AzurLane::dadi::HeadImagePath+")}");
    ui->btn_dadi_h->setStyleSheet("QPushButton{border-image:url("+AzurLane::dadi_h::HeadImagePath+")}");
    ui->btn_heitaizi->setStyleSheet("QPushButton{border-image:url("+AzurLane::heitaizi::HeadImagePath+");}");
    ui->btn_heitaiziSZ->setStyleSheet("QPushButton{border-image:url("+AzurLane::heitaizishuizhuo::HeadImagePath+");}");
    ui->btn_huonvlulu->setStyleSheet("QPushButton{border-image:url("+AzurLane::huonvlulu::HeadImagePath+");}");
    ui->btn_kulasuo->setStyleSheet("QPushButton{border-image:url("+AzurLane::kulasuo::HeadImagePath+");}");
    ui->btn_nengdai->setStyleSheet("QPushButton{border-image:url("+AzurLane::nengdai::HeadImagePath+");}");
    ui->btn_niaohai->setStyleSheet("QPushButton{border-image:url("+AzurLane::niaohai::HeadImagePath+");}");
    ui->btn_TLXlifu->setStyleSheet("QPushButton{border-image:url("+AzurLane::tianlangxinglifu::HeadImagePath+");}");
    ui->btn_xili->setStyleSheet("QPushButton{border-image: url("+AzurLane::xili::HeadImagePath+");}");
    //liantong
    ui->btn_liantong1->setStyleSheet("QPushButton{border-image:url("+LianTong::liantong1::HeadImagePath+");}");
    //VOCALOID
    ui->btn_luotianyi01->setStyleSheet("QPushButton{border-image:url("+VOCALOID::luotianyi01::HeadImagePath+");}");
    ui->btn_luotianyi02->setStyleSheet("QPushButton{border-image:url("+VOCALOID::luotianyi02::HeadImagePath+");}");
    ui->btn_luotianyi03->setStyleSheet("QPushButton{border-image:url("+VOCALOID::luotianyi03::HeadImagePath+");}");
    ui->btn_luotianyi04->setStyleSheet("QPushButton{border-image:url("+VOCALOID::luotianyi04::HeadImagePath+");}");
    ui->btn_luotianyi05->setStyleSheet("QPushButton{border-image:url("+VOCALOID::luotianyi05::HeadImagePath+");}");
    //VirtuaReal
    ui->btn_yousa->setStyleSheet("QPushButton{border-image:url("+VirtuaReal::yousa::HeadImagePath+");}");
}

void RoleSelection::InitClassVariable()
{
    AzurLaneCurrentPage = AzurLanePageDef::BaiYing;
    CurRole = RoleDef::blbl22;
    AzurLaneFrameWidth = 580;
}

void RoleSelection::SetRoleInfo()
{
    QString Name;
    QString HeadPath;
    switch (CurRole) {
    //bilibili
    case RoleDef::blbl22:{
        Name=BiLiBiLi::bl22::Name;
        HeadPath=BiLiBiLi::bl22::HeadImagePath;
        break;
    }
    //AzurLane
    case RoleDef::biruishuiyi:{
        Name=AzurLane::biruishuiyi::Name;
        HeadPath=AzurLane::biruishuiyi::HeadImagePath;
        break;
    }
    case RoleDef::dadi:{
        Name=AzurLane::dadi::Name;
        HeadPath=AzurLane::dadi::HeadImagePath;
        break;
    }
    case RoleDef::dadi_h:{
        Name=AzurLane::dadi_h::Name;
        HeadPath=AzurLane::dadi_h::HeadImagePath;
        break;
    }
    case RoleDef::heitaizi:{
        Name=AzurLane::heitaizi::Name;
        HeadPath=AzurLane::heitaizi::HeadImagePath;
        break;
    }
    case RoleDef::heitaizishuizhuo:{
        Name=AzurLane::heitaizishuizhuo::Name;
        HeadPath=AzurLane::heitaizishuizhuo::HeadImagePath;
        break;
    }
    case RoleDef::huonvlulu:{
        Name=AzurLane::huonvlulu::Name;
        HeadPath=AzurLane::huonvlulu::HeadImagePath;
        break;
    }
    case RoleDef::kulasuo:{
        Name=AzurLane::kulasuo::Name;
        HeadPath=AzurLane::kulasuo::HeadImagePath;
        break;
    }
    case RoleDef::nengdai:{
        Name=AzurLane::nengdai::Name;
        HeadPath=AzurLane::nengdai::HeadImagePath;
        break;
    }
    case RoleDef::niaohai:{
        Name=AzurLane::niaohai::Name;
        HeadPath=AzurLane::niaohai::HeadImagePath;
        break;
    }
    case RoleDef::tianlangxinglifu:{
        Name=AzurLane::tianlangxinglifu::Name;
        HeadPath=AzurLane::tianlangxinglifu::HeadImagePath;
        break;
    }
    case RoleDef::xili:{
        Name=AzurLane::xili::Name;
        HeadPath=AzurLane::xili::HeadImagePath;
        break;
    }
    //LianTong
    case RoleDef::liantong1:{
        Name=LianTong::liantong1::Name;
        HeadPath=LianTong::liantong1::HeadImagePath;
        break;
    }
    //VOCALOID
    case RoleDef::luotianyi01:{
        Name=VOCALOID::luotianyi01::Name;
        HeadPath=VOCALOID::luotianyi01::HeadImagePath;
        break;
    }
    case RoleDef::luotianyi02:{
        Name=VOCALOID::luotianyi02::Name;
        HeadPath=VOCALOID::luotianyi02::HeadImagePath;
        break;
    }
    case RoleDef::luotianyi03:{
        Name=VOCALOID::luotianyi03::Name;
        HeadPath=VOCALOID::luotianyi03::HeadImagePath;
        break;
    }
    case RoleDef::luotianyi04:{
        Name=VOCALOID::luotianyi04::Name;
        HeadPath=VOCALOID::luotianyi04::HeadImagePath;
        break;
    }
    case RoleDef::luotianyi05:{
        Name=VOCALOID::luotianyi05::Name;
        HeadPath=VOCALOID::luotianyi05::HeadImagePath;
        break;
    }
    //VirtuaReal
    case RoleDef::yousa:{
        Name=VirtuaReal::yousa::Name;
        HeadPath=VirtuaReal::yousa::HeadImagePath;
        break;
    }
    }
    ui->lab_RoleHeadImage->setStyleSheet("QLabel{border-image: url("+HeadPath+");}");
    ui->lab_RoleName->setText(Name);
}

void RoleSelection::AzurLaneChangePage(AzurLanePageDef page)
{
    switch (page) {
    case AzurLanePageDef::BaiYing:{
        ui->frame_BaiYing->move(AzurLaneFrameWidth*0,0);
        ui->frame_Chongying->move(AzurLaneFrameWidth*1,0);
        ui->frame_Huangjia->move(AzurLaneFrameWidth*2,0);
        ui->frame_TieXue->move(AzurLaneFrameWidth*3,0);
        AzurLaneCurrentPage = AzurLanePageDef::BaiYing;
        ui->btn_ALBaiYing->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonCurrentPage+")}");
        ui->btn_ALChongYing->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonPage+")}");
        ui->btn_ALHuangJia->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonPage+")}");
        ui->btn_ALTieXue->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonPage+")}");
        break;
    }
    case AzurLanePageDef::ChongYing:{
        ui->frame_BaiYing->move(AzurLaneFrameWidth*(-1),0);
        ui->frame_Chongying->move(AzurLaneFrameWidth*0,0);
        ui->frame_Huangjia->move(AzurLaneFrameWidth*1,0);
        ui->frame_TieXue->move(AzurLaneFrameWidth*2,0);
        AzurLaneCurrentPage = AzurLanePageDef::ChongYing;
        ui->btn_ALBaiYing->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonPage+")}");
        ui->btn_ALChongYing->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonCurrentPage+")}");
        ui->btn_ALHuangJia->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonPage+")}");
        ui->btn_ALTieXue->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonPage+")}");
        break;
    }
    case AzurLanePageDef::HuangJia:{
        ui->frame_BaiYing->move(AzurLaneFrameWidth*(-2),0);
        ui->frame_Chongying->move(AzurLaneFrameWidth*(-1),0);
        ui->frame_Huangjia->move(AzurLaneFrameWidth*0,0);
        ui->frame_TieXue->move(AzurLaneFrameWidth*1,0);
        AzurLaneCurrentPage = AzurLanePageDef::HuangJia;
        ui->btn_ALBaiYing->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonPage+")}");
        ui->btn_ALChongYing->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonPage+")}");
        ui->btn_ALHuangJia->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonCurrentPage+")}");
        ui->btn_ALTieXue->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonPage+")}");
        break;
    }
    case AzurLanePageDef::TieXue:{
        ui->frame_BaiYing->move(AzurLaneFrameWidth*(-3),0);
        ui->frame_Chongying->move(AzurLaneFrameWidth*(-2),0);
        ui->frame_Huangjia->move(AzurLaneFrameWidth*(-1),0);
        ui->frame_TieXue->move(AzurLaneFrameWidth*0,0);
        AzurLaneCurrentPage = AzurLanePageDef::TieXue;
        ui->btn_ALBaiYing->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonPage+")}");
        ui->btn_ALChongYing->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonPage+")}");
        ui->btn_ALHuangJia->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonPage+")}");
        ui->btn_ALTieXue->setStyleSheet("QPushButton{border-image:url("+UIResources::UIButtonCurrentPage+")}");
        break;
    }
    }
}

void RoleSelection::on_btn_Determine_clicked()
{
    emit RoleChange(CurRole);
    this->setVisible(false);
}

void RoleSelection::on_btn_kulasuo_clicked()
{
    CurRole = RoleDef::kulasuo;
    SetRoleInfo();
}


void RoleSelection::on_btn_22_clicked()
{
    CurRole = RoleDef::blbl22;
    SetRoleInfo();
}

void RoleSelection::on_btn_yousa_clicked()
{
    CurRole = RoleDef::yousa;
    SetRoleInfo();
}

void RoleSelection::on_btn_liantong1_clicked()
{
    CurRole = RoleDef::liantong1;
    SetRoleInfo();
}

void RoleSelection::on_btn_TLXlifu_clicked()
{
    CurRole = RoleDef::tianlangxinglifu;
    SetRoleInfo();
}

void RoleSelection::on_btn_xili_clicked()
{
    CurRole = RoleDef::xili;
    SetRoleInfo();
}

void RoleSelection::on_btn_biruishuiyi_clicked()
{
    CurRole = RoleDef::biruishuiyi;
    SetRoleInfo();
}

void RoleSelection::on_btn_heitaizi_clicked()
{
    CurRole = RoleDef::heitaizi;
    SetRoleInfo();
}

void RoleSelection::on_btn_heitaiziSZ_clicked()
{
    CurRole = RoleDef::heitaizishuizhuo;
    SetRoleInfo();
}

void RoleSelection::on_btn_niaohai_clicked()
{
    CurRole = RoleDef::niaohai;
    SetRoleInfo();
}

void RoleSelection::on_btn_ALUpPage_clicked()
{
    switch (AzurLaneCurrentPage) {
    case AzurLanePageDef::ChongYing:{
        AzurLaneChangePage(AzurLanePageDef::BaiYing);
        break;
    }
    case AzurLanePageDef::HuangJia:{
        AzurLaneChangePage(AzurLanePageDef::ChongYing);
        break;
    }
    case AzurLanePageDef::TieXue:{
        AzurLaneChangePage(AzurLanePageDef::HuangJia);
        break;
    }
    }
}

void RoleSelection::on_btn_ALNextPage_clicked()
{
    switch (AzurLaneCurrentPage) {
    case AzurLanePageDef::BaiYing:{
        AzurLaneChangePage(AzurLanePageDef::ChongYing);
        break;
    }
    case AzurLanePageDef::ChongYing:{
        AzurLaneChangePage(AzurLanePageDef::HuangJia);
        break;
    }
    case AzurLanePageDef::HuangJia:{
        AzurLaneChangePage(AzurLanePageDef::TieXue);
        break;
    }
    }
}

void RoleSelection::on_btn_ALBaiYing_clicked()
{
    AzurLaneChangePage(AzurLanePageDef::BaiYing);
}

void RoleSelection::on_btn_ALChongYing_clicked()
{
    AzurLaneChangePage(AzurLanePageDef::ChongYing);
}

void RoleSelection::on_btn_ALHuangJia_clicked()
{
    AzurLaneChangePage(AzurLanePageDef::HuangJia);
}

void RoleSelection::on_btn_ALTieXue_clicked()
{
    AzurLaneChangePage(AzurLanePageDef::TieXue);
}

void RoleSelection::on_btn_huonvlulu_clicked()
{
    CurRole = RoleDef::huonvlulu;
    SetRoleInfo();
}

void RoleSelection::on_btn_nengdai_clicked()
{
    CurRole = RoleDef::nengdai;
    SetRoleInfo();
}

void RoleSelection::on_btn_dadi_clicked()
{
    CurRole = RoleDef::dadi;
    SetRoleInfo();
}

void RoleSelection::on_btn_dadi_h_clicked()
{
    CurRole = RoleDef::dadi_h;
    SetRoleInfo();
}

void RoleSelection::on_btn_luotianyi01_clicked()
{
    CurRole = RoleDef::luotianyi01;
    SetRoleInfo();
}

void RoleSelection::on_btn_luotianyi02_clicked()
{
    CurRole = RoleDef::luotianyi02;
    SetRoleInfo();
}

void RoleSelection::on_btn_luotianyi03_clicked()
{
    CurRole = RoleDef::luotianyi03;
    SetRoleInfo();
}

void RoleSelection::on_btn_luotianyi04_clicked()
{
    CurRole = RoleDef::luotianyi04;
    SetRoleInfo();
}

void RoleSelection::on_btn_luotianyi05_clicked()
{
    CurRole = RoleDef::luotianyi05;
    SetRoleInfo();
}
