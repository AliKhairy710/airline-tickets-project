#include "adminmenu.h"
#include "data.h"
#include "ui_adminmenu.h"
#include <QMessageBox>
#include <QString>

Adminmenu::Adminmenu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Adminmenu)
{
    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);
    for(int i = 0; i < planeCount; i++)
    {
        ui->comboPlane->addItem(planes[i].code);
    }
    ui->comboType->addItem("Flight");
    ui->comboType->addItem("Plane");
}

Adminmenu::~Adminmenu()
{
    delete ui;
}

void Adminmenu::on_btnBack_clicked()
{
    this->close();
    parentWidget()->show();
}
void Adminmenu::on_pushButton_addplane_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void Adminmenu::on_pushButton_updateplane_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void Adminmenu::on_pushButton_addflight_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void Adminmenu::on_pushButton_updateflight_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void Adminmenu::on_pushButton_searchadmin_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void Adminmenu::on_pushButton_addplane_2_clicked()
{
    if(planeCount >= 50) return;

    planes[planeCount].model = ui->lineModel->text();
    planes[planeCount].code = ui->lineCode->text();
    planes[planeCount].rows = ui->lineRows->text().toInt();
    planes[planeCount].seats = ui->lineSeats->text();

    planeCount++;

    savePlanes();

    ui->lineModel->clear();
    ui->lineCode->clear();
    ui->lineRows->clear();
    ui->lineSeats->clear();

    QMessageBox::information(this, "Done", "Plane Added");
}






void Adminmenu::on_pushButton_searchcode_clicked()
{
    QString code = ui->lineSearchCode->text().trimmed();

    for(int i = 0; i < planeCount; i++)
    {
        if(planes[i].code.trimmed().compare(code, Qt::CaseInsensitive) == 0)
        {
            ui->lineModelupdate->setText(planes[i].model);
            ui->lineRowsupdate->setText(QString::number(planes[i].rows));
            ui->lineSeatsupdate->setText(planes[i].seats);
            return;
        }
    }

    QMessageBox::warning(this, "Error", "Not Found");
}




void Adminmenu::on_pushButton_updateplane_2_clicked()
{
    QString code = ui->lineSearchCode->text().trimmed();

    for(int i = 0; i < planeCount; i++)
    {
        if(planes[i].code == code)
        {
            planes[i].model = ui->lineModelupdate->text();
            planes[i].rows = ui->lineRowsupdate->text().toInt();
            planes[i].seats = ui->lineSeatsupdate->text();

            savePlanes();

            QMessageBox::information(this, "Done", "Updated");
            return;
        }
    }

    QMessageBox::warning(this, "Error", "Not Found");
}


void Adminmenu::on_btnAddFlight_clicked()
{
    if(flightCount >= 100) return;

    flights[flightCount].flightNumber = ui->lineFlightNo->text();
    flights[flightCount].departureCity = ui->lineFrom->text();
    flights[flightCount].arrivalCity = ui->lineTo->text();

    flights[flightCount].departureDate = ui->lineDate->text();
    flights[flightCount].departureTime = ui->lineTime->text();

    flights[flightCount].arrivalDate = ui->lineArrivalDate->text();
    flights[flightCount].arrivalTime = ui->lineArrivalTime->text();

    flights[flightCount].planeCode = ui->comboPlane->currentText();

    flightCount++;

    saveFlights();


    ui->lineFlightNo->clear();
    ui->lineFrom->clear();
    ui->lineTo->clear();
    ui->lineDate->clear();
    ui->lineTime->clear();
    ui->lineArrivalDate->clear();
    ui->lineArrivalTime->clear();

    QMessageBox::information(this, "Done", "Flight Added Successfully");
}


void Adminmenu::on_btnFindFlight_clicked()
{
    QString no = ui->lineSearchFlightNo->text();

    for(int i = 0; i < flightCount; i++)
    {
        if(flights[i].flightNumber == no)
        {
            ui->lineFlightNo->setText(flights[i].flightNumber);
            ui->lineFrom_2->setText(flights[i].departureCity);
            ui->lineTo_2->setText(flights[i].arrivalCity);
            ui->lineDate_2->setText(flights[i].departureDate);
            ui->lineTime_2->setText(flights[i].departureTime);
            ui->lineArrivalDate_2->setText(flights[i].arrivalDate);
            ui->lineArrivalTime_2->setText(flights[i].arrivalTime);

            ui->comboPlane_2->setCurrentText(flights[i].planeCode);

            return;
        }
    }

    QMessageBox::warning(this, "Error", "Flight Not Found");
}


void Adminmenu::on_btnUpdateFlight_clicked()
{

    QString no = ui->lineSearchFlightNo->text();

    for(int i = 0; i < flightCount; i++)
    {
        if(flights[i].flightNumber == no)
        {
            flights[i].flightNumber = ui->lineFlightNo->text();
            flights[i].departureCity = ui->lineFrom->text();
            flights[i].arrivalCity = ui->lineTo->text();
            flights[i].departureDate = ui->lineDate->text();
            flights[i].departureTime = ui->lineTime->text();
            flights[i].arrivalDate = ui->lineArrivalDate->text();
            flights[i].arrivalTime = ui->lineArrivalTime->text();
            flights[i].planeCode = ui->comboPlane->currentText();

            saveFlights();

            QMessageBox::information(this, "Done", "Flight Updated");
            return;
        }
    }

    QMessageBox::warning(this, "Error", "Flight Not Found");
}


void Adminmenu::on_btnSearch_clicked()
{
    QString key = ui->lineSearch->text();

    ui->tableResults->clear();
    ui->tableResults->setRowCount(0);

    //if flight
    if(ui->comboType->currentText() == "Flight")
    {
        ui->tableResults->setColumnCount(8);

        QStringList headers;
        headers << "Flight No" << "From" << "To"
                << "Dep Date" << "Dep Time"
                << "Arr Date" << "Arr Time"
                << "Plane";

        ui->tableResults->setHorizontalHeaderLabels(headers);

        for(int i = 0; i < flightCount; i++)
        {
            if(flights[i].flightNumber.contains(key) ||
                flights[i].departureCity.contains(key) ||
                flights[i].arrivalCity.contains(key))
            {
                int row = ui->tableResults->rowCount();
                ui->tableResults->insertRow(row);

                ui->tableResults->setItem(row, 0, new QTableWidgetItem(flights[i].flightNumber));
                ui->tableResults->setItem(row, 1, new QTableWidgetItem(flights[i].departureCity));
                ui->tableResults->setItem(row, 2, new QTableWidgetItem(flights[i].arrivalCity));
                ui->tableResults->setItem(row, 3, new QTableWidgetItem(flights[i].departureDate));
                ui->tableResults->setItem(row, 4, new QTableWidgetItem(flights[i].departureTime));
                ui->tableResults->setItem(row, 5, new QTableWidgetItem(flights[i].arrivalDate));
                ui->tableResults->setItem(row, 6, new QTableWidgetItem(flights[i].arrivalTime));
                ui->tableResults->setItem(row, 7, new QTableWidgetItem(flights[i].planeCode));
            }
        }
    }


    else
    {
        ui->tableResults->setColumnCount(4);

        QStringList headers;
        headers << "Model" << "Code" << "Rows" << "Seats";

        ui->tableResults->setHorizontalHeaderLabels(headers);

        for(int i = 0; i < planeCount; i++)
        {
            if(planes[i].model.contains(key) ||
                planes[i].code.contains(key))
            {
                int row = ui->tableResults->rowCount();
                ui->tableResults->insertRow(row);

                ui->tableResults->setItem(row, 0, new QTableWidgetItem(planes[i].model));
                ui->tableResults->setItem(row, 1, new QTableWidgetItem(planes[i].code));
                ui->tableResults->setItem(row, 2, new QTableWidgetItem(QString::number(planes[i].rows)));
                ui->tableResults->setItem(row, 3, new QTableWidgetItem(planes[i].seats));
            }
        }
    }

    if(ui->tableResults->rowCount() == 0)
    {
        QMessageBox::information(this, "No Results", "Nothing found");
    }
}

