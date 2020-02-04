#include "windowsetup.h"
#include "ui_windowsetup.h"

WindowSetUp::WindowSetUp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowSetUp)
{
    ui->setupUi(this);
}

WindowSetUp::~WindowSetUp()
{
    delete ui;
}

void WindowSetUp::on_btn_Reset_clicked()
{
    ui->lEt_Height->setText("1000");
}

void WindowSetUp::on_btn_Use_clicked()
{
    emit ChangeWindowSize(ui->lEt_Height->text().toInt());
}

void WindowSetUp::on_btn_Close_clicked()
{
    this->setVisible(false);
}
