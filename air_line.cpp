#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//------------------------------structs-------------------------------------------------------------------------------

//------------------------------functions-----------------------------------------------------------------------------
void add_flight()
{
    string flight_number, origin, destination, departure_time, arrival_time;
    cout << "   Enter flight number: ";
    cin >> flight_number;
    cout << "   Enter origin: ";
    cin >> origin;
    cout << "   Enter destination: ";
    cin >> destination;
    cout << "   Enter departure time: ";
    cin >> departure_time;
    cout << "   Enter arrival time: ";
    cin >> arrival_time;
    // Here you would add code to save the flight information to a file or database
    cout << "   Flight added successfully!" << endl;
}
//------------------------------------------------------------------------------------------------------------
void delete_flight()
{
    string flight_number;
    cout << "   Enter flight number to delete: ";
    cin >> flight_number;
    // Here you would add code to delete the flight information from a file or database
    cout << "   Flight deleted successfully!" << endl;
}
//------------------------------------------------------------------------------------------------------------
void update_flight()
{
    string flight_number, origin, destination, departure_time, arrival_time;
    cout << "   Enter flight number to update: ";
    cin >> flight_number;
    cout << "   Enter new origin: ";
    cin >> origin;
    cout << "   Enter new destination: ";
    cin >> destination;
    cout << "   Enter new departure time: ";
    cin >> departure_time;
    cout << "   Enter new arrival time: ";
    cin >> arrival_time;
    // Here you would add code to update the flight information in a file or database
    cout << "   Flight updated successfully!" << endl;
}
//------------------------------------------------------------------------------------------------------------
void view_flights()
{
    // Here you would add code to read and display flight information from a file or database
    cout << "   Displaying all flights..." << endl;
}
//------------------------------------------------------------------------------------------------------------
void view_bookings()
{
    // Here you would add code to read and display booking information from a file or database
    cout << "   Displaying all bookings..." << endl;
}
//------------------------------------------------------------------------------------------------------------
void book_flight()
{
    string flight_number, passenger_name;
    cout << "   Enter flight number to book: ";
    cin >> flight_number;
    cout << "   Enter passenger name: ";
    cin >> passenger_name;
    // Here you would add code to save the booking information to a file or database
    cout << "   Flight booked successfully!" << endl;
}
//------------------------------------------------------------------------------------------------------------
void cancel_booking()
{
    string booking_id;
    cout << "   Enter booking ID to cancel: ";
    cin >> booking_id;
    // Here you would add code to delete the booking information from a file or database
    cout << "   Booking cancelled successfully!" << endl;
}
//------------------------------------------------------------------------------------------------------------
void view_my_bookings()
{
    // Here you would add code to read and display the user's booking information from a file or database
    cout << "   Displaying your bookings..." << endl;
}

//---------------------------------------------------main menu---------------------------------------------------------

int main_menu()
{
    int choice;
    cout << "   -------------------" << endl;
    cout << "   Please select what do you want to login as ?: " << endl;
    cout << "   1. admin " << endl;
    cout << "   2. user " << endl;
    cout << "   3. Exit" << endl;

    cin >> choice;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(10000, '\n');
        choice = -1;
    }

    return choice;
}

//---------------------------------------------------admin functions-----------------------------------------------------

int  admin_menu()
{
    int choice;
    cout << "   -------------------" << endl;
    cout << "   Please select an option: " << endl;
    cout << "   1. Add a flight" << endl;
    cout << "   2. Delete a flight" << endl;
    cout << "   3. Update a flight" << endl;
    cout << "   4. View all flights" << endl;
    cout << "   5. View all bookings" << endl;
    cout << "   6. main menu " << endl;
    cin >> choice;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(10000, '\n');
        choice = -1;
    }

    return choice;
}

//------------------------------------------------check login------------------------------------------------------------

void check_login()
{
    string admin_name, password;
    cout << "   -------------------" << endl;
    cout << "   Enter username: ";
    cin >> admin_name;
    cout << "   Enter password: ";
    cin >> password;
    // For simplicity, we will just check against hardcoded credentials
    if (admin_name == "admin" && password == "admin123") {
        cout << "   Login successful. Welcome, admin!" << endl;

        int admin_choice = 0;
        do {
            admin_choice = admin_menu();

            switch (admin_choice) {
            case 1:
                cout << "   Add flight selected" << endl;
                break;
            case 2:
                cout << "   Delete flight selected" << endl;
                break;
            case 3:
                cout << "   Update flight selected" << endl;
                break;
            case 4:
                cout << "   View all flights selected" << endl;
                break;
            case 5:
                cout << "   View all bookings selected" << endl;
                break;
            case 6:
                break;
            default:
                cout << "   Invalid choice. Please try again." << endl;
                break;
            }

        } while (admin_choice != 6);

    }
    else {
        cout << "   Invalid credentials. Please try again." << endl;
    }
}

//----------------------------------------user functions-----------------------------------------------------------------

int  user_menu()
{
    int choice;
    cout << "   -------------------" << endl;
    cout << "   Please select an option: " << endl;
    cout << "   1. View flight" << endl;
    cout << "   2. Book a flight" << endl;
    cout << "   3. Cancel a booking" << endl;
    cout << "   4. View my bookings" << endl;
    cout << "   5. main menu " << endl;
    cin >> choice;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(10000, '\n');
        choice = -1;
    }

    return choice;
}

//------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------
int main()
{
    cout << " -------------------" << endl;
    cout << " welcome to egy air " << endl;
    cout << " -------------------" << endl;
    cout << " EgyAir: Your journey begins here. Connecting you to the world with comfort and care. " << endl;
    cout << " \n " << endl;

    //------------------------------------------------------------------------------------------------------------//

    string gestfirstname;
    int gestage;
    cout << "--------------------------------------------------" << endl;
    cout << " what is your first name :";
    cin >> gestfirstname;
    cout << " \n ";
    cout << "inter your age : ";
    cin >> gestage;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid age input!" << endl;
        return 0;
    }

    cout << " \n ";
    cout << "--------------------------------------------------" << endl;
    cout << " welcome " << gestfirstname << " to egy air ." << endl;

    //------------------------------------------------------------------------------------------------------------//

    int con_choice = 1;

    do
    {
        int choice = main_menu();
        switch (choice) {
        case 1: {
            check_login();
            break;
        }
        case 2: {
            int user_choice = 0;
            do {
                user_choice = user_menu();

                switch (user_choice) {
                case 1:
                    cout << "   View flight selected" << endl;
                    break;
                case 2:
                    cout << "   Book flight selected" << endl;
                    break;
                case 3:
                    cout << "   Cancel booking selected" << endl;
                    break;
                case 4:
                    cout << "   View my bookings selected" << endl;
                    break;
                case 5:
                    break;
                default:
                    cout << "   Invalid choice. Please try again." << endl;
                    break;
                }

            } while (user_choice != 5);

            break;
        }
        case 3:
            con_choice = 0;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (con_choice == 1);

    return 0;
}
