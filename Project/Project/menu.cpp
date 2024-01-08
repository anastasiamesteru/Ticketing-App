#include "menu.h"
#include "ticket.h"
#include "show.h"
#include "file.h"

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
    while (choice != 0) {
        cout << "===============================" << endl;
        cout << "==== / Show Tickets / ====" << endl;
        cout << "===============================" << endl;

    }
}
void Menu::showShows()
{
    int choice = -1;
    while (choice != 0) {
        cout << "===============================" << endl;
        cout << "==== / Show Available Shows / ====" << endl;
        cout << "===============================" << endl;

    }
}
void Menu::showVenues()
{
    int choice = -1;
    while (choice != 0)
    {
        cout << "===============================" << endl;
        cout << "==== / Show Available Venues / ====" << endl;
        cout << "===============================" << endl;

    }
}

void Menu::showSeats()
{
    int choice = -1;
    while (choice != 0) {
        cout << "===============================" << endl;
        cout << "==== / Show Available Seats / ====" << endl;
        cout << "===============================" << endl;

    }
}

void Menu::buyTicket()
{
    int choice = -1;
    while (choice != 0) {
        cout << "===============================" << endl;
        cout << "==== / Buy Ticket / ====" << endl;
        cout << "===============================" << endl;

    }
}
