#include "menu.h"
#include "ticket.h"
#include "show.h"
#include "file.h"
#include "venue.h"
#include "show.cpp"
#include "ticket.cpp"
#include "venue.cpp"
#include "venue.cpp"

using namespace std;

void Menu::showMenu() {
    cout << "====== Ticketing App Menu ======" << endl;
    cout << "1. Show tickets" << endl;
    cout << "2. Show available shows" << endl;
    cout << "3. Show available venues" << endl;
    cout << "4. Show available seats" << endl;
    cout << "5. Buy a ticket" << endl;
    cout << "6. Exit" << endl;
    cout << "===============================" << endl;
    cout << "Enter your choice: ";
}

void Menu::run() {
    int choice;
    cin >> choice;
    if (choice >= 0 && choice <= 6)
    {
        switch (choice)
        {
        case 1:
            showTickets();
            break;
        case 2:
            showShows();
            break;
        case 3:
            showVenues();
            break;
        case 4:
            showSeats();
            break;
        case 5:
            buyTicket();
            break;
        case 6:
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            cin >> choice;
        }
    }
}

void Menu::showTickets()
{
    int choice = -1;
    while (choice != 0)
    {
        cout << "===============================" << endl;
        cout << "==== / Show Tickets / ====" << endl;
        cout << "===============================" << endl;
        cout << "Tickets: " << Ticket::total_tickets << endl;
        for (int i = 1; i <= Ticket::total_tickets; ++i)
        {
            //  cout << i << this->total_tickets[i - 1]->getTicketNumber() << endl;
            cout << "Return" << endl;
            cout << "> "; cin >> choice;
        }
    }
}
void Menu::showShows()
{
    int choice = -1;
    while (choice != 0) {
        cout << "===============================" << endl;
        cout << "==== / Show Available Shows / ====" << endl;
        cout << "===============================" << endl;
        cout << "Shows: " << Show::total_shows << endl;
        for (int i = 1; i <= Show::total_shows; ++i)
        {
            //  cout << i << this->total_shows[i - 1]->getName() << endl;
            cout << "Return" << endl;
            cout << "> "; cin >> choice;
        }
    }
}
//}
void Menu::showVenues()
{
    int choice = -1;
    while (choice != 0)
    {
        cout << "===============================" << endl;
        cout << "==== / Show Available Venues / ====" << endl;
        cout << "===============================" << endl;
        // cout << "Venues: " << Venue::total_venues << endl;
        // for (int i = 1; i <= Venue::total_venues; ++i)
        {
            //   cout <<  i << this->fp.venues[i - 1]->getName() << endl;
            cout << "Return" << endl;
            cout << "> "; cin >> choice;
        }
    }
}

void Menu::showSeats()
{
    int choice = -1;
    while (choice != 0) {
        cout << "===============================" << endl;
        cout << "==== / Show Available Seats / ====" << endl;
        cout << "===============================" << endl;
        // cout << "Seats: " << Seat::total_seats << endl;
        // for (int i = 1; i <= Seat::total_seats; ++i)
        {
            //  cout << i << this->total_seats[i - 1]->getName() << endl;
            cout << "Return" << endl;
            cout << "> "; cin >> choice;
        }
    }

}

void Menu::buyTicket()
{
    int choice = -1;
    while (choice != 0) {
        cout << "===============================" << endl;
        cout << "==== / Buy Ticket / ====" << endl;
        cout << "===============================" << endl;
        // ??????????????
    }
}
