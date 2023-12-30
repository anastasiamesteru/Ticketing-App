#include "ticket.h"

//Setters
/*
char* Ticket::randomnumber()
{
	char* number = new char[9];
	for (i = 0; i < 8; i++) number[i] = srand();
	return number;
}
*/

void setShow(Show* show)
{
	//if (show != nullptr) this->show= new Show(*show);
	//else throw;

}

void Ticket::setTicketNumber(unsigned int ticketnumber)
{
	if (ticketnumber != 0) this->ticketnumber = ticketnumber;
	else throw;
}

void Ticket::setTicketPrice(float ticketprice)
{
	if (ticketprice > 0) this->ticketprice = ticketprice;
	else throw;
}

void Ticket::setTicketType(TicketType newtype)
{
	if ((int)newtype > 2 || (int)newtype < 0) this->type = TicketType::NORMAL;
	else this->type = newtype;
}


void Ticket::setTicketPayMethod(TicketPayMethod newpaymethod)
{
	if ((int)newpaymethod > 2 || (int)newpaymethod < 0) this->paymethod = TicketPayMethod::CASH;
	else this->paymethod = newpaymethod;
}


//Getters

Show* Ticket::getShow()
{
	Show* newtext = new Show(*this->show);
	return newtext;
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

//Ticket type operators

ostream& operator<<(ostream& out, const TicketType& type)
{
	switch (type)
	{
	case TicketType::NORMAL:
		out << "Normal"; break;
	case TicketType::VIP:
		out << "VIP"; break;
	default:
		out << "unknown";
	}
	return out;
}

istream& operator>>(istream& in, TicketType& type)
{
	string type;
	in >> type;

	switch (type)
	{
	case TicketType::NORMAL:
		in >> "Normal"; break;
	case TicketType::VIP:
		in >> "VIP"; break;
	default:
		in >> "unknown";
	}
	return in;
}

ostream& operator<<(ostream& out, const TicketPayMethod& paymethod)
{
	switch (paymethod)
	{
	case TicketPayMethod::CASH:
		out << "cash"; break;
	case TicketPayMethod::CARD:
		out << "card"; break;
	default:
		out << "unknown";
	}
	return out;
}

istream& operator>>(istream& in, TicketPayMethod& paymethod)
{
	string paymethod;
	in >> paymethod;

	switch (paymethod)
	{
	case TicketPayMethod::CASH:
		in >> "cash"; break;
	case TicketPayMethod::CARD:
		in >> "card"; break;
	default:
		in >> "unknown";
	}
	return in;
}

//Operators

ostream& operator<<(ostream& out, const Ticket& newticket)
{
	out << "The show is" << newticket.show << ">The ticket's number is" << newticket.ticketnumber << "with a price of" << newticket.ticketprice << "of type" << newticket.type << "paid with" << newticket.paymethod;
	return out;
}

istream& operator>>(istream& in, Ticket& newticket)
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


bool Ticket::operator==(const Ticket& newticket)
{
	if (this == &newticket) return true;
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




