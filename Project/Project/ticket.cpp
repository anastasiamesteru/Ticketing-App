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

void Ticket::setTicketPrice(float ticketprice)
{
	if (ticketprice > 0) return this->ticketprice;
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

TicketType Ticket::getTicketType()
{
	if (newtype > 2 || newtype < 0) this->type = TicketType::NORMAL;
	else this->type = newtype;
}

TicketPayMethod Ticket::getTicketPayMethod()
{
	if (newtype > 2 || newtype < 0) this->type = TicketPayMethod::CASH;
	else this->type = newtype;
}

