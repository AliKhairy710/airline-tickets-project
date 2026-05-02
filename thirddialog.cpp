#include "thirddialog.h"
#include "searchdialog.h"
#include "ui_thirddialog.h"

ThirdDialog::ThirdDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ThirdDialog)
{
    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);
}

ThirdDialog::~ThirdDialog()
{
    delete ui;
}
void ThirdDialog::on_btnBack_clicked()
{
    this->close();
    parentWidget()->show();
}

void ThirdDialog::on_SearchButton_clicked()
{
    hide();
    SearchDialog = new class SearchDialog(this);
    SearchDialog->show();
}

