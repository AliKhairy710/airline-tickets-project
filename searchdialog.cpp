#include "searchdialog.h"

#include "data.h"
#include "ui_searchdialog.h"
#include "bookingdialog.h"
#include <QMessageBox>

SearchDialog::SearchDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SearchDialog)
{
    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);

    refreshComboBoxes();
}
void SearchDialog::on_btnBack_clicked()
{
    this->close();
    parentWidget()->show();
}

void SearchDialog::refreshComboBoxes()
{
    ui->comboFrom->clear();
    ui->comboTo->clear();

    QStringList cities;

    for(int i = 0; i < flightCount; i++)
    {
        cities << flights[i].departureCity;
        cities << flights[i].arrivalCity;
    }

    cities.removeDuplicates();

    for(int i = 0; i < cities.size(); i++)
    {
        ui->comboFrom->addItem(cities[i]);
        ui->comboTo->addItem(cities[i]);
    }
}

SearchDialog::~SearchDialog()
{
    delete ui;
}
void SearchDialog::on_btnSearch_clicked()
{
        QString from = ui->comboFrom->currentText();
        QString to = ui->comboTo->currentText();
        QString date = ui->lineDate->text();

        ui->tableFlights->clear();
        ui->tableFlights->setRowCount(0);
        ui->tableFlights->setColumnCount(5);

        QStringList headers;
        headers << "Flight No" << "From" << "To" << "Date" << "Time";
        ui->tableFlights->setHorizontalHeaderLabels(headers);

        for(int i = 0; i < flightCount; i++)
        {
            if(flights[i].departureCity == from &&
                flights[i].arrivalCity == to &&
                flights[i].departureDate == date)
            {
                int row = ui->tableFlights->rowCount();
                ui->tableFlights->insertRow(row);

                ui->tableFlights->setItem(row, 0, new QTableWidgetItem(flights[i].flightNumber));
                ui->tableFlights->setItem(row, 1, new QTableWidgetItem(flights[i].departureCity));
                ui->tableFlights->setItem(row, 2, new QTableWidgetItem(flights[i].arrivalCity));
                ui->tableFlights->setItem(row, 3, new QTableWidgetItem(flights[i].departureDate));
                ui->tableFlights->setItem(row, 4, new QTableWidgetItem(flights[i].departureTime));
            }
        }
    }



    void SearchDialog::on_btnBook_clicked()
    {
        int row = ui->tableFlights->currentRow();

        if(row == -1)
        {
            QMessageBox::warning(this, "Error", "Select flight");
            return;
        }

        QString flightNo = ui->tableFlights->item(row, 0)->text();

        BookingDialog *b = new BookingDialog(this);

        b->setFlight(flightNo);

        b->show();
        this->hide();
    }

