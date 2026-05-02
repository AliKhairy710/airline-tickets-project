#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <ui_secdialog.h>

#include "searchdialog.h"
#include "secdialog.h"
#include <ui_thirddialog.h>
#include "thirddialog.h"
#include "adminmenu.h"
#include <ui_adminmenu.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;
    void loadFlights();
    void saveFlights();
    void refreshComboBoxes();

protected:
    void closeEvent(QCloseEvent *event) override;


private slots:
    void on_adminButton_clicked();

    void on_userButton_clicked();


private:
    Ui::MainWindow *ui;
    SecDialog *SecDialog;
    ThirdDialog *ThirdDialog;
    Adminmenu *Adminmenu;
    SearchDialog *SearchDialog;


};
#endif // MAINWINDOW_H
