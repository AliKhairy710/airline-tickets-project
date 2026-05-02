#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "data.h"
#include <QMessageBox>
#include <QPixmap>
#include <QFile>
#include <fstream>
#include <QCloseEvent>
#include <QString>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);
    loadPlanes();
    loadFlights();
}
void MainWindow::closeEvent(QCloseEvent *event)
{

    event->accept();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::loadFlights()
{
    std::ifstream in("Flights.txt");

    if(!in.is_open()) return;

    flightCount = 0;

    std::string fNum, depCity, arrCity, depDate, depTime, arrDate, arrTime, plane;

    while(in >> fNum >> depCity >> arrCity >> depDate >> depTime >> arrDate >> arrTime >> plane)
    {
        flights[flightCount].flightNumber = QString::fromStdString(fNum);
        flights[flightCount].departureCity = QString::fromStdString(depCity);
        flights[flightCount].arrivalCity = QString::fromStdString(arrCity);
        flights[flightCount].departureDate = QString::fromStdString(depDate);
        flights[flightCount].departureTime = QString::fromStdString(depTime);
        flights[flightCount].arrivalDate = QString::fromStdString(arrDate);
        flights[flightCount].arrivalTime = QString::fromStdString(arrTime);
        flights[flightCount].planeCode = QString::fromStdString(plane);

        if(flightCount >= 100) break;

        flightCount++;
    }

    in.close();
}


void MainWindow::on_adminButton_clicked()
{
    hide();
    SecDialog = new class SecDialog(this);
    SecDialog->show();
}
void MainWindow::on_userButton_clicked()
{
    hide();
    ThirdDialog = new class ThirdDialog(this);
    ThirdDialog->show();
}




