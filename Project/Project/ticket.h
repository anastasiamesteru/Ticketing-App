#pragma once
#include <iostream>
#include <sstream>
#include <ostream>
#include <istream>
#include "show.h"

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

	static char* randomnumber();

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
	Ticket(Show* show, unsigned int ticketnumber, float ticketprice, TicketType type, TicketPayMethod paymethod); //constructor with parameters
	Ticket(const Ticket& newTicket); //copy constructor

	//Destructor
	~Ticket();

	friend ostream& operator << (ostream& out, const TicketType& type);
	friend istream& operator >> (istream& in, TicketType& type);

	friend ostream& operator << (ostream& out, const TicketPayMethod& paymethod);
	friend istream& operator >> (istream& in, TicketPayMethod& paymethod);

	//Operators

	friend ostream& operator << (ostream& out, const Ticket& newticket);
	friend istream& operator >> (istream& in, Ticket& newticket);

	Ticket operator = (const Ticket& newticket);

	bool operator == (const Ticket& newticket);
	bool operator != (const Ticket& newticket);
};




