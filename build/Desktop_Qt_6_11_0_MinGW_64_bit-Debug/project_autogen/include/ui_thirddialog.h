/********************************************************************************
** Form generated from reading UI file 'thirddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDDIALOG_H
#define UI_THIRDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ThirdDialog
{
public:
    QLabel *label;
    QPushButton *SearchButton;
    QPushButton *btnBack;

    void setupUi(QDialog *ThirdDialog)
    {
        if (ThirdDialog->objectName().isEmpty())
            ThirdDialog->setObjectName("ThirdDialog");
        ThirdDialog->resize(1481, 789);
        label = new QLabel(ThirdDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 10, 1051, 321));
        QFont font;
        font.setPointSize(32);
        font.setItalic(true);
        label->setFont(font);
        SearchButton = new QPushButton(ThirdDialog);
        SearchButton->setObjectName("SearchButton");
        SearchButton->setGeometry(QRect(450, 350, 451, 191));
        btnBack = new QPushButton(ThirdDialog);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(30, 590, 161, 81));

        retranslateUi(ThirdDialog);

        QMetaObject::connectSlotsByName(ThirdDialog);
    } // setupUi

    void retranslateUi(QDialog *ThirdDialog)
    {
        ThirdDialog->setWindowTitle(QCoreApplication::translate("ThirdDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ThirdDialog", "Welcome To Our Airline Tickets Reservation", nullptr));
        SearchButton->setText(QCoreApplication::translate("ThirdDialog", "Search Flights", nullptr));
        btnBack->setText(QCoreApplication::translate("ThirdDialog", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThirdDialog: public Ui_ThirdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDDIALOG_H
