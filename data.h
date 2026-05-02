#ifndef DATA_H
#define DATA_H
#include <QString>
// ===== STRUCTS =====
struct Flight {
    QString flightNumber;
    QString departureCity;
    QString arrivalCity;
    QString departureDate;
    QString arrivalDate;
    QString departureTime;
    QString arrivalTime;
    QString planeCode;
};

struct Plane {
    QString model;
    QString code;
    int rows;
    QString seats;
};

// ===== GLOBAL ARRAYS =====
extern Flight flights[100];
extern Plane planes[50];

extern int flightCount;
extern int planeCount;
void loadPlanes();
void savePlanes();
void saveFlights();
void refreshComboBoxes();
// QString seatLayout;
#endif // DATA_H
