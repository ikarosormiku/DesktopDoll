#ifndef WINDOWSETUP_H
#define WINDOWSETUP_H

#include <QWidget>

namespace Ui {
class WindowSetUp;
}

class WindowSetUp : public QWidget
{
    Q_OBJECT

public:
    explicit WindowSetUp(QWidget *parent = 0);
    ~WindowSetUp();

private slots:
    void on_btn_Reset_clicked();

    void on_btn_Use_clicked();

    void on_btn_Close_clicked();

private:
    Ui::WindowSetUp *ui;

signals:
    void ChangeWindowSize(int height);
};

#endif // WINDOWSETUP_H
