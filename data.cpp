#include "data.h"
#include <fstream>
Flight flights[100];
Plane planes[50];

int flightCount = 0;
int planeCount = 0;
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
