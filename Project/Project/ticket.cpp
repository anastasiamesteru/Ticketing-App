#include "ticket.h"

//Setters

void Ticket::setShow(Show* show)
{
}

void Ticket::setTicketNumber(unsigned int ticketnumber)
{
	if (ticketnumber != 0) return this->ticketnumber;
	else throw;
}

//Getters
Show* Ticket::getShow()
{
	
}

int Ticket::getTicketNumber()
{
	return this->;
}

void Show::setStartTime(Date* starttime)
{
	

}
