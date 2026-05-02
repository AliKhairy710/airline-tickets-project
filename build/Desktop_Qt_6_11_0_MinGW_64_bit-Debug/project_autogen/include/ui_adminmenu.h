/********************************************************************************
** Form generated from reading UI file 'adminmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENU_H
#define UI_ADMINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Adminmenu
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QPushButton *pushButton_addplane;
    QPushButton *pushButton_updateflight;
    QPushButton *pushButton_searchadmin;
    QPushButton *pushButton_addflight;
    QPushButton *pushButton_updateplane;
    QWidget *page_2;
    QLabel *label_2;
    QLineEdit *lineModel;
    QLineEdit *lineRows;
    QLineEdit *lineCode;
    QLineEdit *lineSeats;
    QPushButton *pushButton_addplane_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *page_3;
    QLabel *label_3;
    QLineEdit *lineSearchCode;
    QLineEdit *lineModelupdate;
    QLineEdit *lineRowsupdate;
    QLineEdit *lineSeatsupdate;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *pushButton_updateplane_2;
    QPushButton *pushButton_searchcode;
    QWidget *page_4;
    QLabel *label_4;
    QLineEdit *lineFlightNo;
    QLineEdit *lineFrom;
    QLineEdit *lineTo;
    QLineEdit *lineDate;
    QLineEdit *lineTime;
    QLineEdit *lineArrivalDate;
    QLineEdit *lineArrivalTime;
    QComboBox *comboPlane;
    QLabel *label_24;
    QLabel *lineFlightNo_2;
    QLabel *lineFlightNo_4;
    QLabel *lineFlightNo_5;
    QLabel *lineFlightNo_6;
    QLabel *lineFlightNo_7;
    QLabel *lineFlightNo_8;
    QLabel *lineFlightNo_9;
    QPushButton *btnAddFlight;
    QWidget *page_5;
    QLabel *label_5;
    QLineEdit *lineSearchFlightNo;
    QLabel *label_15;
    QPushButton *btnFindFlight;
    QLabel *label_16;
    QLineEdit *lineFrom_2;
    QLineEdit *lineTo_2;
    QLineEdit *lineDate_2;
    QLineEdit *lineTime_2;
    QLineEdit *lineArrivalDate_2;
    QLineEdit *lineArrivalTime_2;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QComboBox *comboPlane_2;
    QLabel *label_22;
    QPushButton *btnUpdateFlight;
    QWidget *page_6;
    QLabel *label_6;
    QComboBox *comboType;
    QLabel *label_23;
    QLineEdit *lineSearch;
    QPushButton *btnSearch;
    QTableWidget *tableResults;
    QPushButton *btnBack;

    void setupUi(QDialog *Adminmenu)
    {
        if (Adminmenu->objectName().isEmpty())
            Adminmenu->setObjectName("Adminmenu");
        Adminmenu->resize(1523, 806);
        stackedWidget = new QStackedWidget(Adminmenu);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-50, 0, 1411, 551));
        QFont font;
        font.setPointSize(16);
        stackedWidget->setFont(font);
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(520, 0, 431, 101));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label->setFont(font1);
        pushButton_addplane = new QPushButton(page);
        pushButton_addplane->setObjectName("pushButton_addplane");
        pushButton_addplane->setGeometry(QRect(80, 160, 231, 111));
        pushButton_updateflight = new QPushButton(page);
        pushButton_updateflight->setObjectName("pushButton_updateflight");
        pushButton_updateflight->setGeometry(QRect(1150, 270, 231, 111));
        pushButton_searchadmin = new QPushButton(page);
        pushButton_searchadmin->setObjectName("pushButton_searchadmin");
        pushButton_searchadmin->setGeometry(QRect(590, 220, 231, 111));
        pushButton_addflight = new QPushButton(page);
        pushButton_addflight->setObjectName("pushButton_addflight");
        pushButton_addflight->setGeometry(QRect(1150, 160, 231, 111));
        pushButton_updateplane = new QPushButton(page);
        pushButton_updateplane->setObjectName("pushButton_updateplane");
        pushButton_updateplane->setGeometry(QRect(80, 270, 231, 111));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(580, -40, 381, 161));
        QFont font2;
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setItalic(true);
        label_2->setFont(font2);
        lineModel = new QLineEdit(page_2);
        lineModel->setObjectName("lineModel");
        lineModel->setGeometry(QRect(570, 130, 210, 44));
        lineRows = new QLineEdit(page_2);
        lineRows->setObjectName("lineRows");
        lineRows->setGeometry(QRect(570, 260, 210, 44));
        lineCode = new QLineEdit(page_2);
        lineCode->setObjectName("lineCode");
        lineCode->setGeometry(QRect(570, 200, 210, 44));
        lineSeats = new QLineEdit(page_2);
        lineSeats->setObjectName("lineSeats");
        lineSeats->setGeometry(QRect(570, 320, 210, 44));
        pushButton_addplane_2 = new QPushButton(page_2);
        pushButton_addplane_2->setObjectName("pushButton_addplane_2");
        pushButton_addplane_2->setGeometry(QRect(580, 410, 181, 81));
        label_7 = new QLabel(page_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(460, 110, 131, 81));
        QFont font3;
        font3.setPointSize(20);
        label_7->setFont(font3);
        label_8 = new QLabel(page_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(480, 180, 131, 81));
        label_8->setFont(font3);
        label_9 = new QLabel(page_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(480, 240, 131, 81));
        label_9->setFont(font3);
        label_10 = new QLabel(page_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(470, 300, 131, 81));
        label_10->setFont(font3);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_3 = new QLabel(page_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(560, -60, 371, 191));
        QFont font4;
        font4.setPointSize(24);
        font4.setBold(true);
        label_3->setFont(font4);
        lineSearchCode = new QLineEdit(page_3);
        lineSearchCode->setObjectName("lineSearchCode");
        lineSearchCode->setGeometry(QRect(590, 120, 210, 44));
        lineModelupdate = new QLineEdit(page_3);
        lineModelupdate->setObjectName("lineModelupdate");
        lineModelupdate->setGeometry(QRect(590, 250, 210, 44));
        lineRowsupdate = new QLineEdit(page_3);
        lineRowsupdate->setObjectName("lineRowsupdate");
        lineRowsupdate->setGeometry(QRect(590, 300, 210, 44));
        lineSeatsupdate = new QLineEdit(page_3);
        lineSeatsupdate->setObjectName("lineSeatsupdate");
        lineSeatsupdate->setGeometry(QRect(590, 350, 210, 44));
        label_11 = new QLabel(page_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(380, 80, 211, 111));
        label_11->setFont(font1);
        label_12 = new QLabel(page_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(490, 260, 211, 111));
        label_12->setFont(font1);
        label_13 = new QLabel(page_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(490, 310, 211, 111));
        label_13->setFont(font1);
        label_14 = new QLabel(page_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(480, 210, 211, 111));
        label_14->setFont(font1);
        pushButton_updateplane_2 = new QPushButton(page_3);
        pushButton_updateplane_2->setObjectName("pushButton_updateplane_2");
        pushButton_updateplane_2->setGeometry(QRect(580, 430, 201, 81));
        pushButton_searchcode = new QPushButton(page_3);
        pushButton_searchcode->setObjectName("pushButton_searchcode");
        pushButton_searchcode->setGeometry(QRect(810, 110, 141, 61));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_4 = new QLabel(page_4);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(590, -60, 391, 171));
        label_4->setFont(font4);
        lineFlightNo = new QLineEdit(page_4);
        lineFlightNo->setObjectName("lineFlightNo");
        lineFlightNo->setGeometry(QRect(750, 120, 210, 44));
        lineFrom = new QLineEdit(page_4);
        lineFrom->setObjectName("lineFrom");
        lineFrom->setGeometry(QRect(750, 160, 210, 44));
        lineTo = new QLineEdit(page_4);
        lineTo->setObjectName("lineTo");
        lineTo->setGeometry(QRect(750, 200, 210, 44));
        lineDate = new QLineEdit(page_4);
        lineDate->setObjectName("lineDate");
        lineDate->setGeometry(QRect(750, 240, 210, 44));
        lineTime = new QLineEdit(page_4);
        lineTime->setObjectName("lineTime");
        lineTime->setGeometry(QRect(750, 280, 210, 44));
        lineArrivalDate = new QLineEdit(page_4);
        lineArrivalDate->setObjectName("lineArrivalDate");
        lineArrivalDate->setGeometry(QRect(750, 320, 210, 44));
        lineArrivalTime = new QLineEdit(page_4);
        lineArrivalTime->setObjectName("lineArrivalTime");
        lineArrivalTime->setGeometry(QRect(750, 360, 210, 44));
        comboPlane = new QComboBox(page_4);
        comboPlane->setObjectName("comboPlane");
        comboPlane->setGeometry(QRect(590, 410, 101, 51));
        label_24 = new QLabel(page_4);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(560, 110, 181, 51));
        lineFlightNo_2 = new QLabel(page_4);
        lineFlightNo_2->setObjectName("lineFlightNo_2");
        lineFlightNo_2->setGeometry(QRect(570, 160, 181, 31));
        lineFlightNo_4 = new QLabel(page_4);
        lineFlightNo_4->setObjectName("lineFlightNo_4");
        lineFlightNo_4->setGeometry(QRect(610, 200, 141, 31));
        lineFlightNo_5 = new QLabel(page_4);
        lineFlightNo_5->setObjectName("lineFlightNo_5");
        lineFlightNo_5->setGeometry(QRect(560, 240, 191, 41));
        lineFlightNo_6 = new QLabel(page_4);
        lineFlightNo_6->setObjectName("lineFlightNo_6");
        lineFlightNo_6->setGeometry(QRect(560, 280, 191, 41));
        lineFlightNo_7 = new QLabel(page_4);
        lineFlightNo_7->setObjectName("lineFlightNo_7");
        lineFlightNo_7->setGeometry(QRect(590, 330, 151, 31));
        lineFlightNo_8 = new QLabel(page_4);
        lineFlightNo_8->setObjectName("lineFlightNo_8");
        lineFlightNo_8->setGeometry(QRect(600, 360, 151, 41));
        lineFlightNo_9 = new QLabel(page_4);
        lineFlightNo_9->setObjectName("lineFlightNo_9");
        lineFlightNo_9->setGeometry(QRect(520, 410, 71, 51));
        btnAddFlight = new QPushButton(page_4);
        btnAddFlight->setObjectName("btnAddFlight");
        btnAddFlight->setGeometry(QRect(810, 420, 201, 111));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_5 = new QLabel(page_5);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(570, -90, 481, 271));
        label_5->setFont(font4);
        lineSearchFlightNo = new QLineEdit(page_5);
        lineSearchFlightNo->setObjectName("lineSearchFlightNo");
        lineSearchFlightNo->setGeometry(QRect(650, 100, 210, 44));
        label_15 = new QLabel(page_5);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(530, 70, 191, 91));
        btnFindFlight = new QPushButton(page_5);
        btnFindFlight->setObjectName("btnFindFlight");
        btnFindFlight->setGeometry(QRect(880, 100, 201, 51));
        label_16 = new QLabel(page_5);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(570, 150, 191, 91));
        lineFrom_2 = new QLineEdit(page_5);
        lineFrom_2->setObjectName("lineFrom_2");
        lineFrom_2->setGeometry(QRect(640, 180, 210, 44));
        lineTo_2 = new QLineEdit(page_5);
        lineTo_2->setObjectName("lineTo_2");
        lineTo_2->setGeometry(QRect(640, 220, 210, 44));
        lineDate_2 = new QLineEdit(page_5);
        lineDate_2->setObjectName("lineDate_2");
        lineDate_2->setGeometry(QRect(640, 260, 210, 44));
        lineTime_2 = new QLineEdit(page_5);
        lineTime_2->setObjectName("lineTime_2");
        lineTime_2->setGeometry(QRect(640, 300, 210, 44));
        lineArrivalDate_2 = new QLineEdit(page_5);
        lineArrivalDate_2->setObjectName("lineArrivalDate_2");
        lineArrivalDate_2->setGeometry(QRect(640, 340, 210, 44));
        lineArrivalTime_2 = new QLineEdit(page_5);
        lineArrivalTime_2->setObjectName("lineArrivalTime_2");
        lineArrivalTime_2->setGeometry(QRect(640, 380, 210, 44));
        label_17 = new QLabel(page_5);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(600, 190, 191, 91));
        label_18 = new QLabel(page_5);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(580, 230, 191, 91));
        label_19 = new QLabel(page_5);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(570, 270, 191, 91));
        label_20 = new QLabel(page_5);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(500, 350, 191, 91));
        label_21 = new QLabel(page_5);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(500, 310, 191, 91));
        comboPlane_2 = new QComboBox(page_5);
        comboPlane_2->setObjectName("comboPlane_2");
        comboPlane_2->setGeometry(QRect(600, 430, 117, 44));
        label_22 = new QLabel(page_5);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(530, 420, 71, 36));
        btnUpdateFlight = new QPushButton(page_5);
        btnUpdateFlight->setObjectName("btnUpdateFlight");
        btnUpdateFlight->setGeometry(QRect(850, 430, 201, 81));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        label_6 = new QLabel(page_6);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(560, -80, 471, 211));
        label_6->setFont(font4);
        comboType = new QComboBox(page_6);
        comboType->setObjectName("comboType");
        comboType->setGeometry(QRect(400, 60, 117, 44));
        label_23 = new QLabel(page_6);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(340, 50, 111, 61));
        lineSearch = new QLineEdit(page_6);
        lineSearch->setObjectName("lineSearch");
        lineSearch->setGeometry(QRect(540, 60, 210, 44));
        btnSearch = new QPushButton(page_6);
        btnSearch->setObjectName("btnSearch");
        btnSearch->setGeometry(QRect(760, 60, 152, 45));
        tableResults = new QTableWidget(page_6);
        tableResults->setObjectName("tableResults");
        tableResults->setGeometry(QRect(60, 150, 1341, 391));
        stackedWidget->addWidget(page_6);
        btnBack = new QPushButton(Adminmenu);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(20, 580, 201, 81));

        retranslateUi(Adminmenu);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Adminmenu);
    } // setupUi

    void retranslateUi(QDialog *Adminmenu)
    {
        Adminmenu->setWindowTitle(QCoreApplication::translate("Adminmenu", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Adminmenu", " Admin Control Panel", nullptr));
        pushButton_addplane->setText(QCoreApplication::translate("Adminmenu", "Add Plane", nullptr));
        pushButton_updateflight->setText(QCoreApplication::translate("Adminmenu", "Update Flight", nullptr));
        pushButton_searchadmin->setText(QCoreApplication::translate("Adminmenu", "Search", nullptr));
        pushButton_addflight->setText(QCoreApplication::translate("Adminmenu", "Add Flight", nullptr));
        pushButton_updateplane->setText(QCoreApplication::translate("Adminmenu", "Update Plane", nullptr));
        label_2->setText(QCoreApplication::translate("Adminmenu", "Add Plane", nullptr));
        pushButton_addplane_2->setText(QCoreApplication::translate("Adminmenu", "Add", nullptr));
        label_7->setText(QCoreApplication::translate("Adminmenu", "Model:", nullptr));
        label_8->setText(QCoreApplication::translate("Adminmenu", "Code:", nullptr));
        label_9->setText(QCoreApplication::translate("Adminmenu", "Rows:", nullptr));
        label_10->setText(QCoreApplication::translate("Adminmenu", "Seats:", nullptr));
        label_3->setText(QCoreApplication::translate("Adminmenu", "Update Plane", nullptr));
        label_11->setText(QCoreApplication::translate("Adminmenu", "Search Code:", nullptr));
        label_12->setText(QCoreApplication::translate("Adminmenu", "Rows:", nullptr));
        label_13->setText(QCoreApplication::translate("Adminmenu", "Seats:", nullptr));
        label_14->setText(QCoreApplication::translate("Adminmenu", "Model:", nullptr));
        pushButton_updateplane_2->setText(QCoreApplication::translate("Adminmenu", "Update", nullptr));
        pushButton_searchcode->setText(QCoreApplication::translate("Adminmenu", "Search", nullptr));
        label_4->setText(QCoreApplication::translate("Adminmenu", "Add Flight", nullptr));
        label_24->setText(QCoreApplication::translate("Adminmenu", "Flight Number:", nullptr));
        lineFlightNo_2->setText(QCoreApplication::translate("Adminmenu", "Departure City:", nullptr));
        lineFlightNo_4->setText(QCoreApplication::translate("Adminmenu", "Arrival City:", nullptr));
        lineFlightNo_5->setText(QCoreApplication::translate("Adminmenu", "Departure Date:", nullptr));
        lineFlightNo_6->setText(QCoreApplication::translate("Adminmenu", "Departure Time:", nullptr));
        lineFlightNo_7->setText(QCoreApplication::translate("Adminmenu", "Arrival Date:", nullptr));
        lineFlightNo_8->setText(QCoreApplication::translate("Adminmenu", "Arrival Time:", nullptr));
        lineFlightNo_9->setText(QCoreApplication::translate("Adminmenu", "Plane:", nullptr));
        btnAddFlight->setText(QCoreApplication::translate("Adminmenu", "Add", nullptr));
        label_5->setText(QCoreApplication::translate("Adminmenu", "Update Flight", nullptr));
        label_15->setText(QCoreApplication::translate("Adminmenu", "Flight No:", nullptr));
        btnFindFlight->setText(QCoreApplication::translate("Adminmenu", "Search Flight", nullptr));
        label_16->setText(QCoreApplication::translate("Adminmenu", "From:", nullptr));
        label_17->setText(QCoreApplication::translate("Adminmenu", "To:", nullptr));
        label_18->setText(QCoreApplication::translate("Adminmenu", "Date:", nullptr));
        label_19->setText(QCoreApplication::translate("Adminmenu", "Time:", nullptr));
        label_20->setText(QCoreApplication::translate("Adminmenu", "ArrivalTime:", nullptr));
        label_21->setText(QCoreApplication::translate("Adminmenu", "ArrivalDate:", nullptr));
        label_22->setText(QCoreApplication::translate("Adminmenu", "Plane:", nullptr));
        btnUpdateFlight->setText(QCoreApplication::translate("Adminmenu", "Update", nullptr));
        label_6->setText(QCoreApplication::translate("Adminmenu", "Admin Search", nullptr));
        label_23->setText(QCoreApplication::translate("Adminmenu", "Type:", nullptr));
        btnSearch->setText(QCoreApplication::translate("Adminmenu", "Search", nullptr));
        btnBack->setText(QCoreApplication::translate("Adminmenu", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adminmenu: public Ui_Adminmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_H
