#include <iostream>
#include <fstream>
#include <string>

class Menu {
private:
    void showMenu();
    void showTickets();
    void showShows();
    void showVenues();
    void showSeats();
    void buyTicket();
public:
    void run();
};