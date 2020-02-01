#include "roleselection.h"
#include "ui_roleselection.h"

RoleSelection::RoleSelection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RoleSelection)
{
    ui->setupUi(this);
    InitWindowUI();
}

RoleSelection::~RoleSelection()
{
    delete ui;
}

void RoleSelection::InitWindowUI()
{
//    QPalette pa(gHeadImagePath22);
    ui->btn_22->setStyleSheet("QPushButton{border-image: url("+gImageFolderPath22+gHeadImage+");}");
    ui->btn_kulasuo->setStyleSheet("QPushButton{border-image: url("+gImageFolderPathKulasuo+gHeadImage+");}");
    ui->btn_yousa->setStyleSheet("QPushButton{border-image: url("+gImageFolderPathYousa+gHeadImage+");}");
    ui->btn_liantong1->setStyleSheet("QPushButton{border-image: url("+gImageFolderPathLiantong1+gHeadImage+");}");
}

void RoleSelection::SetRoleInfo()
{
    QString Name;
    QString HeadPath;
    switch (CurRole) {
    case RoleDef::blbl22:{
        Name="22";
        HeadPath=gImageFolderPath22+gHeadImage;
        break;
    }
    case RoleDef::yousa:{
        Name="泠鸢yousa";
        HeadPath=gImageFolderPathYousa+gHeadImage;
        break;
    }
    case RoleDef::kulasuo:{
        Name="库拉索";
        HeadPath=gImageFolderPathKulasuo+gHeadImage;
        break;
    }
    case RoleDef::liantong1:{
        Name="小红";
        HeadPath=gImageFolderPathLiantong1+gHeadImage;
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
