#pragma once
#include <iostream>
#include <show.h>
using namespace std;

enum class TicketType { NORMAL, VIP };
enum class  TicketPayMethod { CASH, CARD };

class Ticket

{
private:
	unsigned int ticketnumber = 0;
	float ticketprice = 0;
	Show* show;
	TicketType type = TicketType::NORMAL;
	TicketPayMethod paymethod = TicketPayMethod::CASH;
		
	// Setters
	void setShow(Show* show);
	void setTicketNumber(unsigned int ticketnumber);
	void setTicketPrice(float ticketprice);
	void setTicketType(TicketType);
	void setTicketPayMethod(TicketPayMethod);



public: 

	// Getters
	Show* getShow();
	int getTicketNumber();
	float getTicketPrice();
	TicketType getTicketType();
	TicketPayMethod getTicketPayMethod();

	//Constructors

	Ticket(); //default constructor
	Ticket(Show* show,unsigned int ticketnumber,float ticketprice, TicketType type, TicketPayMethod paymethod ); //constructor with parameters
	Ticket(const Ticket& newTicket); //copy constructor

	//Destructor
	~Ticket();

	//Operators

	ostream& operator << (ostream& out, const Ticket& ticket);
	istream& operator >> (istream& in, Ticket& ticket);

	Ticket operator = (const Ticket& ticket);



}






