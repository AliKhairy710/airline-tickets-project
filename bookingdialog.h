#ifndef BOOKINGDIALOG_H
#define BOOKINGDIALOG_H

#include <QDialog>
#include <QGridLayout>
#include <QPushButton>

namespace Ui {
class BookingDialog;
}

class BookingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BookingDialog(QWidget *parent = nullptr);
    ~BookingDialog();

    void setFlight(QString f);

private slots:
    void on_btnConfirm_clicked();
    void on_btnBack_clicked();

private:
    Ui::BookingDialog *ui;

    QString selectedFlight;
    QString selectedSeat;

    QGridLayout *gridSeats;

    void createSeats(int rows, QString seats);
    void handleSeatClick(QPushButton *btn);
};

#endif // BOOKINGDIALOG_H
