#include "airline_system.h"
#include <QStringList>
#include <QList>
#include <fstream>
Plane planes[50];
Flight flights[100];

int planeCount = 0;
int flightCount = 0;
void savePlanes()
{
    std::ofstream out("planes.txt");

    for(int i = 0; i < planeCount; i++)
    {
        out << planes[i].model.toStdString() << " "
            << planes[i].code.toStdString() << " "
            << planes[i].rows << " "
            << planes[i].seats.toStdString() << "\n";
    }

    out.close();
}
void loadPlanes()
{
    std::ifstream in("planes.txt");

    if(!in.is_open()) return;

    planeCount = 0;

    std::string model, code, seats;
    int rows;

    while(in >> model >> code >> rows >> seats)
    {
        planes[planeCount].model = QString::fromStdString(model);
        planes[planeCount].code = QString::fromStdString(code);
        planes[planeCount].rows = rows;
        planes[planeCount].seats = QString::fromStdString(seats);

        planeCount++;
        if(planeCount >= 50) break;
    }

    in.close();
}
void saveFlights()
{
    std::ofstream out("Flights.txt");

    for(int i = 0; i < flightCount; i++)
    {
        out << flights[i].flightNumber.toStdString() << " "
            << flights[i].departureCity.toStdString() << " "
            << flights[i].arrivalCity.toStdString() << " "
            << flights[i].departureDate.toStdString() << " "
            << flights[i].departureTime.toStdString() << " "
            << flights[i].arrivalDate.toStdString() << " "
            << flights[i].arrivalTime.toStdString() << " "
            << flights[i].planeCode.toStdString() << "\n";
    }

    out.close();
}


void addPlane(QString model, QString code, int rows, QString seats)
{
    if (planeCount >= 50) return;

    planes[planeCount].model = model;
    planes[planeCount].code = code;
    planes[planeCount].rows = rows;
    planes[planeCount].seats = seats;

    planeCount++;
}



int findPlane(QString code)
{
    for(int i = 0; i < planeCount; i++)
        if(planes[i].code == code)
            return i;

    return -1;
}

int findFlight(QString number)
{
    for(int i = 0; i < flightCount; i++)
        if(flights[i].flightNumber == number)
            return i;

    return -1;
}
int findPlaneByCode(QString code)
{
    for(int i = 0; i < planeCount; i++)
    {
        if(planes[i].code.trimmed().compare(code, Qt::CaseInsensitive) == 0)
        {
            return i;
        }
    }
    return -1;
}
bool updatePlane(QString code, QString model, int rows, QString seats)
{
    for(int i = 0; i < planeCount; i++)
    {
        if(planes[i].code.trimmed() == code.trimmed())
        {
            planes[i].model = model;
            planes[i].rows = rows;
            planes[i].seats = seats;
            return true;
        }
    }
    return false;
}
bool addFlight(QString number,
               QString from,
               QString to,
               QString depDate,
               QString depTime,
               QString arrDate,
               QString arrTime,
               QString planeCode)
{
    if (flightCount >= 100)
        return false;

    flights[flightCount].flightNumber = number;
    flights[flightCount].departureCity = from;
    flights[flightCount].arrivalCity = to;

    flights[flightCount].departureDate = depDate;
    flights[flightCount].departureTime = depTime;

    flights[flightCount].arrivalDate = arrDate;
    flights[flightCount].arrivalTime = arrTime;

    flights[flightCount].planeCode = planeCode;

    flightCount++;

    return true;
}
int findFlightByNumber(QString number)
{
    for(int i = 0; i < flightCount; i++)
    {
        if(flights[i].flightNumber.trimmed() == number.trimmed())
        {
            return i;
        }
    }
    return -1;
}
bool updateFlight(QString oldNumber,
                  QString newNumber,
                  QString from,
                  QString to,
                  QString depDate,
                  QString depTime,
                  QString arrDate,
                  QString arrTime,
                  QString planeCode)
{
    for(int i = 0; i < flightCount; i++)
    {
        if(flights[i].flightNumber.trimmed() == oldNumber.trimmed())
        {
            flights[i].flightNumber = newNumber;
            flights[i].departureCity = from;
            flights[i].arrivalCity = to;
            flights[i].departureDate = depDate;
            flights[i].departureTime = depTime;
            flights[i].arrivalDate = arrDate;
            flights[i].arrivalTime = arrTime;
            flights[i].planeCode = planeCode;

            return true;
        }
    }
    return false;
}
bool getPlaneByCode(QString flightNo, int &rows, QString &seats)
{
    for(int i = 0; i < flightCount; i++)
    {
        if(flights[i].flightNumber.trimmed() == flightNo.trimmed())
        {
            QString planeCode = flights[i].planeCode;

            for(int j = 0; j < planeCount; j++)
            {
                if(planes[j].code.trimmed() == planeCode.trimmed())
                {
                    rows = planes[j].rows;
                    seats = planes[j].seats;
                    return true;
                }
            }
        }
    }
    return false;
}
QStringList getAllCities()
{
    QStringList cities;

    for(int i = 0; i < flightCount; i++)
    {
        cities << flights[i].departureCity;
        cities << flights[i].arrivalCity;
    }

    cities.removeDuplicates();

    return cities;
}