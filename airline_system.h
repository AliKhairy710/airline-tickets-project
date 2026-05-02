#ifndef AIRLINE_SYSTEM_H
#define AIRLINE_SYSTEM_H

#include <QString>
#include <QStringList>

// ================= STRUCTS =================
struct Plane {
    QString model;
    QString code;
    int rows;
    QString seats;
};

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

// ================= GLOBALS =================
extern Plane planes[50];
extern Flight flights[100];

extern int planeCount;
extern int flightCount;

// ================= FUNCTIONS =================
void loadPlanes();
void savePlanes();

void loadFlights();
void saveFlights();

void addPlane(QString model, QString code, int rows, QString seats);
bool addFlight(QString number,
               QString from,
               QString to,
               QString depDate,
               QString depTime,
               QString arrDate,
               QString arrTime,
               QString planeCode);

int findPlane(QString code);
int findFlight(QString number);

int findPlaneByCode(QString code);
int findFlightByNumber(QString number);

bool updatePlane(QString code, QString model, int rows, QString seats);
bool updateFlight(QString oldNumber,
                  QString newNumber,
                  QString from,
                  QString to,
                  QString depDate,
                  QString depTime,
                  QString arrDate,
                  QString arrTime,
                  QString planeCode);

bool getPlaneByCode(QString flightNo, int &rows, QString &seats);

QStringList getAllCities();

#endif