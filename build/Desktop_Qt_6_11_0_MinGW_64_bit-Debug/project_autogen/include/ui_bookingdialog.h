/********************************************************************************
** Form generated from reading UI file 'bookingdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKINGDIALOG_H
#define UI_BOOKINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookingDialog
{
public:
    QWidget *seatWidget;
    QPushButton *btnBack;
    QPushButton *btnConfirm;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *labelFlight;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *labelSelected;

    void setupUi(QDialog *BookingDialog)
    {
        if (BookingDialog->objectName().isEmpty())
            BookingDialog->setObjectName("BookingDialog");
        BookingDialog->resize(1554, 894);
        seatWidget = new QWidget(BookingDialog);
        seatWidget->setObjectName("seatWidget");
        seatWidget->setGeometry(QRect(140, 160, 891, 331));
        btnBack = new QPushButton(BookingDialog);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(0, 610, 181, 81));
        btnConfirm = new QPushButton(BookingDialog);
        btnConfirm->setObjectName("btnConfirm");
        btnConfirm->setGeometry(QRect(490, 510, 161, 101));
        widget = new QWidget(BookingDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(440, 30, 213, 42));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(18);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        labelFlight = new QLabel(widget);
        labelFlight->setObjectName("labelFlight");
        labelFlight->setFont(font);

        horizontalLayout->addWidget(labelFlight);

        widget1 = new QWidget(BookingDialog);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(420, 110, 321, 42));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        labelSelected = new QLabel(widget1);
        labelSelected->setObjectName("labelSelected");
        labelSelected->setFont(font);

        horizontalLayout_2->addWidget(labelSelected);


        retranslateUi(BookingDialog);

        QMetaObject::connectSlotsByName(BookingDialog);
    } // setupUi

    void retranslateUi(QDialog *BookingDialog)
    {
        BookingDialog->setWindowTitle(QCoreApplication::translate("BookingDialog", "Dialog", nullptr));
        btnBack->setText(QCoreApplication::translate("BookingDialog", "Back", nullptr));
        btnConfirm->setText(QCoreApplication::translate("BookingDialog", "Confirm", nullptr));
        label->setText(QCoreApplication::translate("BookingDialog", "Flight:", nullptr));
        labelFlight->setText(QCoreApplication::translate("BookingDialog", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("BookingDialog", "Selected: ", nullptr));
        labelSelected->setText(QCoreApplication::translate("BookingDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookingDialog: public Ui_BookingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINGDIALOG_H
