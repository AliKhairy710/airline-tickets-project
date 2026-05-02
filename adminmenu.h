#ifndef ADMINMENU_H
#define ADMINMENU_H

#include <QDialog>

namespace Ui {
class Adminmenu;
}

class Adminmenu : public QDialog
{
    Q_OBJECT

public:
    explicit Adminmenu(QWidget *parent = nullptr);
    ~Adminmenu();


private slots:
    void on_btnBack_clicked();
    void on_pushButton_addplane_clicked();

    void on_pushButton_updateplane_clicked();

    void on_pushButton_addflight_clicked();

    void on_pushButton_updateflight_clicked();

    void on_pushButton_searchadmin_clicked();

    void on_pushButton_addplane_2_clicked();



    void on_pushButton_searchcode_clicked();



    void on_pushButton_updateplane_2_clicked();

    void on_btnAddFlight_clicked();

    void on_btnFindFlight_clicked();

    void on_btnUpdateFlight_clicked();

    void on_btnSearch_clicked();

private:
    Ui::Adminmenu *ui;
};

#endif // ADMINMENU_H
