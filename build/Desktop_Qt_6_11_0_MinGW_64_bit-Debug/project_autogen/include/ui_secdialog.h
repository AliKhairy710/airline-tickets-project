/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QLabel *label_3;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_user;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;
    QLabel *label_pic;
    QPushButton *btnBack;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName("SecDialog");
        SecDialog->resize(1379, 837);
        label_3 = new QLabel(SecDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(530, 0, 371, 91));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        label_3->setFont(font);
        groupBox = new QGroupBox(SecDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(670, 150, 471, 431));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 100, 101, 41));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 150, 81, 31));
        lineEdit_user = new QLineEdit(groupBox);
        lineEdit_user->setObjectName("lineEdit_user");
        lineEdit_user->setGeometry(QRect(160, 110, 191, 28));
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(160, 160, 191, 28));
        lineEdit_password->setEchoMode(QLineEdit::EchoMode::Password);
        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(120, 220, 221, 41));
        label_pic = new QLabel(SecDialog);
        label_pic->setObjectName("label_pic");
        label_pic->setGeometry(QRect(80, 120, 431, 511));
        btnBack = new QPushButton(SecDialog);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(0, 630, 161, 71));

        retranslateUi(SecDialog);

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QCoreApplication::translate("SecDialog", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("SecDialog", "Login", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SecDialog", "Login", nullptr));
        label->setText(QCoreApplication::translate("SecDialog", "UserName:", nullptr));
        label_2->setText(QCoreApplication::translate("SecDialog", "Password:", nullptr));
        pushButton_login->setText(QCoreApplication::translate("SecDialog", "Login", nullptr));
        label_pic->setText(QString());
        btnBack->setText(QCoreApplication::translate("SecDialog", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
