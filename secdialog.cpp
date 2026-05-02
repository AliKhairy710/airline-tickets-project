#include "secdialog.h"
#include "adminmenu.h"
#include "ui_secdialog.h"
#include <QMessageBox>
#include <QPixmap>
SecDialog::SecDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SecDialog)
{
    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);
    QPixmap pix("C:/Users/Administrator/Downloads/project/icon.png");
    ui->label_pic->setPixmap(pix.scaled(1000,1080,Qt::KeepAspectRatio));
}

SecDialog::~SecDialog()
{
    delete ui;
}
void SecDialog::on_btnBack_clicked()
{
    this->close();
    parentWidget()->show();
}

void SecDialog::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_user->text();
    QString password = ui->lineEdit_password->text();
    if(username == "admin" && password == "1234"){
        hide();
        Adminmenu = new class Adminmenu(this);
        Adminmenu->show();


    }
    else{
        QMessageBox::warning(this,"Login Failed","Username or Password Is Wrong");
    }


}

