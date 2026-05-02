#ifndef SECDIALOG_H
#define SECDIALOG_H
#include "adminmenu.h"
#include "secdialog.h"
#include <QDialog>

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();

private slots:
    void on_btnBack_clicked();
    void on_pushButton_login_clicked();

private:
    Ui::SecDialog *ui;
    Adminmenu *Adminmenu;
};

#endif // SECDIALOG_H
