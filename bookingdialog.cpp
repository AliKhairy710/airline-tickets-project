#include "bookingdialog.h"
#include "data.h"
#include "ui_bookingdialog.h"
#include <QMessageBox>
BookingDialog::BookingDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BookingDialog)
{
    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);
    gridSeats = new QGridLayout(ui->seatWidget);
}

BookingDialog::~BookingDialog()
{
    delete ui;
}

void BookingDialog::setFlight(QString f)
{
    selectedFlight = f;

    ui->labelFlight->setText("Flight: " + f);

    for(int i = 0; i < flightCount; i++)
    {
        if(flights[i].flightNumber == f)
        {
            QString planeCode = flights[i].planeCode;

            for(int j = 0; j < planeCount; j++)
            {
                if(planes[j].code == planeCode)
                {
                    int rows = planes[j].rows;
                    QString seats = planes[j].seats;

                    QString spaced;
                    for(int k = 0; k < seats.length(); k++)
                        spaced += seats[k] + QString(" ");

                    createSeats(rows, spaced.trimmed());
                    return;
                }
            }
        }
    }
}
void BookingDialog::createSeats(int rows, QString seats)
{
    QStringList letters = seats.split(" ");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < letters.size(); j++)
        {
            QString name = QString::number(i+1) + letters[j];

            QPushButton *btn = new QPushButton(name);

            btn->setFixedSize(40,40);
            btn->setStyleSheet("background-color: green;");

            gridSeats->addWidget(btn, i, j);

            connect(btn, &QPushButton::clicked, this, [=]()
                    {
                        handleSeatClick(btn);
                    });
        }
    }
}
void BookingDialog::handleSeatClick(QPushButton *btn)
{
    selectedSeat = btn->text();

    ui->labelSelected->setText("Selected: " + selectedSeat);

    btn->setStyleSheet("background-color: yellow;");
}
void BookingDialog::on_btnConfirm_clicked()
{
    if(selectedSeat.isEmpty())
    {
        QMessageBox::warning(this, "Error", "Choose a seat");
        return;
    }

    QMessageBox::information(this, "Done",
                             "Flight: " + selectedFlight + "\nSeat: " + selectedSeat);
}
void BookingDialog::on_btnBack_clicked()
{
    this->close();
    parentWidget()->show();
}

