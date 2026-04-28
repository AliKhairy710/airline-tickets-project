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
    cin >> arrival_time ;
    cout << "   Flight added successfully!" << endl;
}
//------------------------------------------------------------------------------------------------------------
void delete_flight() 
{
    string flight_number;
    cout << "   Enter flight number to delete: ";
    cin >> flight_number ;
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
    cout << "   Flight updated successfully!" << endl;
}
//------------------------------------------------------------------------------------------------------------
void view_flights() 
{

    cout << "   Displaying all flights..." << endl;
}
//------------------------------------------------------------------------------------------------------------
void view_bookings() 
{

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
    cout << "   Flight booked successfully!" << endl;
}
//------------------------------------------------------------------------------------------------------------
void cancel_booking() 
{
    string booking_id;
    cout << "   Enter booking ID to cancel: ";
    cin >> booking_id;
    cout << "   Booking cancelled successfully!" << endl;
} 
//------------------------------------------------------------------------------------------------------------
void view_my_bookings() 
{

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
    return choice;
}

//---------------------------------------------------admin functions-----------------------------------------------------

int  admin_menu() 
{
    int choice;
    cout << "   -------------------" << endl;
	cout << "   Please select an option: " << endl ;
    cout << "   1. Add a flight" << endl;
    cout << "   2. Delete a flight" << endl;
    cout << "   3. Update a flight" << endl;
	cout << "   4. View all flights" << endl;
	cout << "   5. View all bookings" << endl;
	cout << "   6. main menu " << endl;
	cin >> choice;

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
    if (admin_name == "admin" && password == "admin123") {
        cout << "   Login successful. Welcome, admin!" << endl;
        admin_menu();
    } else {
        cout << "   Invalid credentials. Please try again." << endl;
    }
}

//----------------------------------------user functions-----------------------------------------------------------------

int  user_menu() 
{
    int choice;
    cout << "   -------------------" << endl;
    cout << "   Please select an option: " << endl ;
    cout << "   1. View flight" << endl;
	cout << "   2. Book a flight" << endl;
	cout << "   3. Cancel a booking" << endl;
    cout << "   4. View my bookings" << endl;
    cout << "   5. main menu " << endl;
    cin >> choice;
	return choice;
}  

//------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------
int main() 
{
    cout << " -------------------" << endl;
    cout << " welcome to egy air " << endl ;
    cout << " -------------------" << endl ;
    cout << " EgyAir: Your journey begins here. Connecting you to the world with comfort and care. " << endl ;
    cout << " \n "<< endl ;

    //------------------------------------------------------------------------------------------------------------//

    string gestfirstname ;
    int gestage ;
    cout << "--------------------------------------------------" << endl;
    cout << " what is your first name :" ;
    cin >> gestfirstname ;
    cout << " \n " ;
    cout << "inter your age : " ;
    cin >>  gestage ;
    cout << " \n ";
    cout << "--------------------------------------------------" << endl ;
    cout << " welcome "<< gestfirstname << " to egy air ." << endl ; 

    //------------------------------------------------------------------------------------------------------------//

    int con_choice = 1;

    do
    {    
        int choice = main_menu();
        switch (choice) {
            case 1: {
                check_login();
				int admin_choice = admin_menu();
                switch (admin_choice) {
                    case 1:
                        add_flight();
                        break;
                    case 2:
                        delete_flight();
                        break;
                    case 3:
                        update_flight();
                        break;
                    case 4:
                        view_flights();
                        break;
                    case 5:
                        view_bookings();
                        break;
                    case 6:
                        break; 
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                        break;
                }
                break;
            }
            case 2: {
				int user_choice = user_menu();
                switch (user_choice) {
                    case 1:
                        view_flights();
                        break;
                    case 2:
                        book_flight();
                        break;
                    case 3:
                        cancel_booking();
                        break;
                    case 4:
                        view_my_bookings();
                        break;
                    case 5:
                        break; 
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                        break;
                }
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
