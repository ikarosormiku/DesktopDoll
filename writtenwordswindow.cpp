#include "writtenwordswindow.h"
#include "ui_writtenwordswindow.h"

WrittenWordsWindow::WrittenWordsWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WrittenWordsWindow),playing(false)
{
    ui->setupUi(this);
    InitWindowUI();
}

WrittenWordsWindow::~WrittenWordsWindow()
{
    delete ui;
}

void WrittenWordsWindow::InitWindowUI()
{
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_QuitOnClose);

    ui->textEdit->setEnabled(false);
}

void WrittenWordsWindow::ClickMessage(AudioDef type)
{
    if(!playing){
        switch (type) {
        case AudioDef::Open:{
            QString str = "6666666666666666666661";
            ShowWrittenWords(str);
            break;
        }
        default:
            break;
        }
    }

}

void WrittenWordsWindow::ShowWrittenWords(QString &str)
{
    this->setVisible(true);
    playing=true;
    ui->textEdit->setEnabled(true);
    ui->textEdit->setText(str);
    ui->textEdit->setEnabled(false);
    playing=false;
}
