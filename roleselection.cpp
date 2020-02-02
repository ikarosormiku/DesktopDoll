#include "roleselection.h"
#include "ui_roleselection.h"

RoleSelection::RoleSelection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RoleSelection)
{
    ui->setupUi(this);
    CurRole = RoleDef::blbl22;
    InitWindowUI();
}

RoleSelection::~RoleSelection()
{
    delete ui;
}

void RoleSelection::InitWindowUI()
{
//    QPalette pa(gHeadImagePath22);
    ui->btn_22->setStyleSheet("QPushButton{border-image: url("+RoleResources::blbl22::HeadImagePath+");}");
    ui->btn_biruishuiyi->setStyleSheet("QPushButton{border-image: url("+RoleResources::biruishuiyi::HeadImagePath+");}");
    ui->btn_heitaizi->setStyleSheet("QPushButton{border-image: url("+RoleResources::heitaizi::HeadImagePath+");}");
    ui->btn_heitaiziSZ->setStyleSheet("QPushButton{border-image: url("+RoleResources::heitaizishuizhuo::HeadImagePath+");}");
    ui->btn_kulasuo->setStyleSheet("QPushButton{border-image: url("+RoleResources::kulasuo::HeadImagePath+");}");
    ui->btn_liantong1->setStyleSheet("QPushButton{border-image: url("+RoleResources::liantong1::HeadImagePath+");}");
    ui->btn_niaohai->setStyleSheet("QPushButton{border-image: url("+RoleResources::niaohai::HeadImagePath+");}");
    ui->btn_TLXlifu->setStyleSheet("QPushButton{border-image: url("+RoleResources::tianlangxinglifu::HeadImagePath+");}");
    ui->btn_xili->setStyleSheet("QPushButton{border-image: url("+RoleResources::xili::HeadImagePath+");}");
    ui->btn_yousa->setStyleSheet("QPushButton{border-image: url("+RoleResources::yousa::HeadImagePath+");}");

}

void RoleSelection::SetRoleInfo()
{
    QString Name;
    QString HeadPath;
    switch (CurRole) {
    case RoleDef::blbl22:{
        Name=RoleResources::blbl22::Name;
        HeadPath=RoleResources::blbl22::HeadImagePath;
        break;
    }
    case RoleDef::biruishuiyi:{
        Name=RoleResources::biruishuiyi::Name;
        HeadPath=RoleResources::biruishuiyi::HeadImagePath;
        break;
    }
    case RoleDef::heitaizi:{
        Name=RoleResources::heitaizi::Name;
        HeadPath=RoleResources::heitaizi::HeadImagePath;
        break;
    }
    case RoleDef::heitaizishuizhuo:{
        Name=RoleResources::heitaizishuizhuo::Name;
        HeadPath=RoleResources::heitaizishuizhuo::HeadImagePath;
        break;
    }
    case RoleDef::kulasuo:{
        Name=RoleResources::kulasuo::Name;
        HeadPath=RoleResources::kulasuo::HeadImagePath;
        break;
    }
    case RoleDef::liantong1:{
        Name=RoleResources::liantong1::Name;
        HeadPath=RoleResources::liantong1::HeadImagePath;
        break;
    }
    case RoleDef::niaohai:{
        Name=RoleResources::niaohai::Name;
        HeadPath=RoleResources::niaohai::HeadImagePath;
        break;
    }
    case RoleDef::tianlangxinglifu:{
        Name=RoleResources::tianlangxinglifu::Name;
        HeadPath=RoleResources::tianlangxinglifu::HeadImagePath;
        break;
    }
    case RoleDef::xili:{
        Name=RoleResources::xili::Name;
        HeadPath=RoleResources::xili::HeadImagePath;
        break;
    }
    case RoleDef::yousa:{
        Name=RoleResources::yousa::Name;
        HeadPath=RoleResources::yousa::HeadImagePath;
        break;
    }
    }
    ui->lab_RoleHeadImage->setStyleSheet("QLabel{border-image: url("+HeadPath+");}");
    ui->lab_RoleName->setText(Name);

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
