#include "menu.h"

using namespace std;

void Menu::showMenu() {
    cout << "====== Ticketing App Menu ======" << endl;
    cout << "1. Show tickets" << endl;
    cout << "2. Show available venues" << endl;
    cout << "3. Show available seats" << endl;
    cout << "4. Buy a ticket" << endl;
    cout << "5. Exit" << endl;
    cout << "===============================" << endl;
    cout << "Enter your choice: ";
}

void Menu::run() {
    char choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
        case '1':
            showTickets();
            break;
        case '2':
            showVenues();
            break;
        case '3':
            showSeats();
            break;
        case '4':
            buyTicket();
            break;
        case '5':
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != '5');
}