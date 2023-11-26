#include "ticket.h"

//Setters

char* Ticket::randomnumber()
{
	char* number = new char[9];
	for (i = 0; i < 8; i++) number[i] = srand();
	return number;
}

void Ticket::setShow(Show* show)
{
	if(Show=nullptr)

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

void Ticket::setTicketType(TicketType)
{
	if (newtype > 2 || newtype < 0) this->type = TicketType::NORMAL;
	else this->type = newtype;
}

void Ticket::setTicketPayMethod(TicketPayMethod)
{
	if (newtype > 2 || newtype < 0) this->type = TicketPayMethod::CASH;
	else this->type = newtype;
}


//Getters
Show* Ticket::getShow()
{
	Show* newtext = new Show*(this->Show);
}

int Ticket::getTicketNumber()
{
	return this->ticketnumber;
}

float Ticket::getTicketPrice()
{
	return this->ticketprice;
}

TicketType Ticket::getTicketType()
{
	return this->type;
}

TicketPayMethod Ticket::getTicketPayMethod()
{
	return this->paymethod;
}

//Constructors

Ticket::Ticket()
{
}

Ticket::Ticket(Show* show, unsigned int ticketnumber, float ticketprice, TicketType type, TicketPayMethod paymethod)
{
	this->setShow(show);
	this->setTicketNumber(ticketnumber);
	this->setTicketPrice(ticketprice);
	this->setTicketType(type);
	this->setTicketPayMethod(paymethod);
}

Ticket::Ticket(const Ticket& newTicket)
{
	this->setShow(newTicket.show);
	this->setTicketNumber(newTicket.ticketnumber);
	this->setTicketPrice(newTicket.ticketprice);
	this->setTicketType(newTicket.type);
	this->setTicketPayMethod(newTicket.paymethod);
}

Ticket::~Ticket()
{
	delete[] Show this->Show = nullptr;
}

//Operators

ostream& Ticket::operator<<(ostream& out, const Ticket& newticket)
{
	out << "The show is" << newticket.show << ">The ticket's number is" << newticket.ticketnumber << "with a price of" << newticket.ticketprice << "of type" << newticket.type << "paid with" << newticket.paymethod;
	return out;
}

istream& Ticket::operator>>(istream& in, Ticket& ticket)
{
	in >> newticket.show >> newticket.ticketnumber >> newticket.ticketprice >> newticket.type >> newticket.paymethod;
	return in;
}

Ticket Ticket::operator=(const Ticket& newticket)
{
	this->setShow(newticket.show);
	this->setTicketNumber(newticket.ticketnumber);
	this->setTicketPrice(newticket.ticketprice);
	this->setTicketType(newticket.type);
	this->setTicketPayMethod(newticket.paymethod);
	return *this;
}

Ticket::operator string()
{
	stringstream ss;
	ss<< "The show is" << newticket.show << ">The ticket's number is" << newticket.ticketnumber << "with a price of" << newticket.ticketprice << "of type" << newticket.type << "paid with" << newticket.paymethod;
	return ss.str();
}

bool Ticket::operator==(const Ticket& newticket)
{
	if (this == newticket) return true;
	if (this->ticketnumber != newticket.ticketnumber) return false;
	if (this->ticketprice != newticket.ticketprice) return false;
	if (this->show != newticket.show) return false;
	if (this->type != newticket.type) return false;
	if (this->paymethod != newticket.paymethod) return false;
	return true;
}

bool Ticket::operator!=(const Ticket& newticket)
{
	return !(*this == newticket);
}


