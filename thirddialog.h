#ifndef THIRDDIALOG_H
#define THIRDDIALOG_H
#include "searchdialog.h"
#include "thirddialog.h"
#include <QDialog>

namespace Ui {
class ThirdDialog;
}

class ThirdDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ThirdDialog(QWidget *parent = nullptr);
    ~ThirdDialog();

private slots:
    void on_btnBack_clicked();
    void on_SearchButton_clicked();

private:
    Ui::ThirdDialog *ui;
    SearchDialog *SearchDialog;
};

#endif // THIRDDIALOG_H
