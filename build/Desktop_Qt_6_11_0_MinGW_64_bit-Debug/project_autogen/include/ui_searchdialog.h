/********************************************************************************
** Form generated from reading UI file 'searchdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchDialog
{
public:
    QComboBox *comboFrom;
    QComboBox *comboTo;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineDate;
    QLabel *label_3;
    QPushButton *btnSearch;
    QTableWidget *tableFlights;
    QPushButton *btnBook;
    QPushButton *btnBack;

    void setupUi(QDialog *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName("SearchDialog");
        SearchDialog->resize(1468, 866);
        comboFrom = new QComboBox(SearchDialog);
        comboFrom->setObjectName("comboFrom");
        comboFrom->setGeometry(QRect(200, 10, 231, 81));
        comboTo = new QComboBox(SearchDialog);
        comboTo->setObjectName("comboTo");
        comboTo->setGeometry(QRect(490, 10, 231, 81));
        label = new QLabel(SearchDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 30, 71, 41));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(SearchDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(450, 30, 51, 41));
        label_2->setFont(font);
        lineDate = new QLineEdit(SearchDialog);
        lineDate->setObjectName("lineDate");
        lineDate->setGeometry(QRect(820, 40, 125, 28));
        label_3 = new QLabel(SearchDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(750, 10, 71, 71));
        label_3->setFont(font);
        btnSearch = new QPushButton(SearchDialog);
        btnSearch->setObjectName("btnSearch");
        btnSearch->setGeometry(QRect(420, 130, 161, 81));
        tableFlights = new QTableWidget(SearchDialog);
        tableFlights->setObjectName("tableFlights");
        tableFlights->setGeometry(QRect(20, 220, 1271, 151));
        btnBook = new QPushButton(SearchDialog);
        btnBook->setObjectName("btnBook");
        btnBook->setGeometry(QRect(460, 420, 251, 101));
        btnBack = new QPushButton(SearchDialog);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(30, 580, 181, 91));

        retranslateUi(SearchDialog);

        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDialog)
    {
        SearchDialog->setWindowTitle(QCoreApplication::translate("SearchDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SearchDialog", "From:", nullptr));
        label_2->setText(QCoreApplication::translate("SearchDialog", "To:", nullptr));
        label_3->setText(QCoreApplication::translate("SearchDialog", "Date:", nullptr));
        btnSearch->setText(QCoreApplication::translate("SearchDialog", "Search", nullptr));
        btnBook->setText(QCoreApplication::translate("SearchDialog", "Book", nullptr));
        btnBack->setText(QCoreApplication::translate("SearchDialog", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
