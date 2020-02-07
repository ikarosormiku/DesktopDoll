#ifndef ROLESELECTION_H
#define ROLESELECTION_H

#include <QWidget>
#include <QPixmap>
#include <QPalette>
#include <QPushButton>
#include <QScrollArea>

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

    void on_btn_TLXlifu_clicked();

    void on_btn_xili_clicked();

    void on_btn_biruishuiyi_clicked();

    void on_btn_heitaizi_clicked();

    void on_btn_heitaiziSZ_clicked();

    void on_btn_niaohai_clicked();

    void on_btn_ALUpPage_clicked();

    void on_btn_ALNextPage_clicked();

    void on_btn_ALBaiYing_clicked();

    void on_btn_ALChongYing_clicked();

    void on_btn_ALHuangJia_clicked();

    void on_btn_ALTieXue_clicked();

private:
    enum AzurLanePageDef{
        BaiYing=256,
        ChongYing,
        HuangJia,
        TieXue
    };
    Ui::RoleSelection *ui;
    RoleDef CurRole;
    AzurLanePageDef AzurLaneCurrentPage;
    int AzurLaneFrameWidth;
    void InitWindowUI();
    void InitClassVariable();
    void SetRoleInfo();
    void AzurLaneChangePage(AzurLanePageDef page);
signals:
    void RoleChange(RoleDef role);
};

#endif // ROLESELECTION_H
