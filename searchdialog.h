#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>

namespace Ui {
class SearchDialog;
}

class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDialog(QWidget *parent = nullptr);
    ~SearchDialog();
    void refreshComboBoxes();

private slots:
    void on_btnBack_clicked();
    void on_btnSearch_clicked();

    // void on_btnBook_clicked();

    void on_btnBook_clicked();

private:
    Ui::SearchDialog *ui;
};

#endif // SEARCHDIALOG_H
