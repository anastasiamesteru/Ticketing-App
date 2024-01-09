#include "file.h"
#include "venue.h"
#include "ticket.h"
#include "seats.h"

using namespace std;

char File::filename[] = "data.txt";
/*
void File::open()
{
	fp.open(File::filename, fstream::in);
}


void File::saveData()
{
	//Venues
	Venue Venue("Starlight Pavilion", "123 Main Street",100,1,2);
	Venue Venue("Harmony Hall", "456 Oak Avenue", 150, 2, 3);
	Venue Venue("Radiant Gardens", "789 Elm Street", 200, 3, 4);

	//the venues array
	this->total_venues = Venue::getTotalVenues();
	this->venues = new Venue * [total_venues];
	venues[0] = &Venue;

	// add to the file
	fp << total_venues << endl;
	for (int i = 0; i < total_venues; ++i)
	{
		fp << *venues[i] <<endl;
	}
	// Tickets
	Ticket ticket1(1, 40, 1, TicketType::NORMAL, TicketPayMethod::CASH);
	Ticket ticket2(2,50, 2, TicketType::VIP, TicketPayMethod::CASH);
	Ticket ticket3(3, 60, 3, TicketType::VIP, TicketPayMethod::CARD);

	//the tickets array
	this->total_tickets = Ticket::getTotalTickets();
	this->tickets = new Ticket * [total_tickets];
	ticket[0] = &Ticket;

	// add to the file
	fp << total_tickets << endl;
	for (int i = 0; i < total_tickets; ++i)
	{
		fp << *tickets[i] << endl;
	}
}


void File::loadData()
{

	// read the venues
	for (int i = 0; i < total_venues; ++i) {
		venues[i] = new Venue();
		fp >> *(venues[i]);
	}

	// read the tickets
	for (int i = 0; i < total_tickets; ++i) {
		tickets[i] = new Ticket();
		fp >> *(tickets[i]);
	}
}

void File::close()
{
	fp.close();
}
*/