#ifndef ROLESELECTION_H
#define ROLESELECTION_H

#include <QWidget>
#include <QPixmap>
#include <QPalette>
#include "globaldef.h"
namespace Ui {
class RoleSelection;
}

class RoleSelection : public QWidget
{
    Q_OBJECT

public:
    explicit RoleSelection(QWidget *parent = 0);
    ~RoleSelection();

private slots:
    void on_btn_Determine_clicked();

    void on_btn_kulasuo_clicked();

    void on_btn_22_clicked();

    void on_btn_yousa_clicked();

    void on_btn_liantong1_clicked();

private:
    Ui::RoleSelection *ui;
    RoleDef CurRole;
    void InitWindowUI();
    void SetRoleInfo();
signals:
    void RoleChange(RoleDef role);
};

#endif // ROLESELECTION_H
