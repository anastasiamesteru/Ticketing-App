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
	float ticketprice????
	Show* show;

		
	// Setters
	void setShow(Show* show);
	void setTicketNumber(unsigned int ticketnumber);
	


public: 

	// Getters
	Show* getShow();
	int getTicketNumber();

	//Constructors

	Ticket(); //default constructor
	Ticket(Show* show,unsigned int ticketnumber,); //constructor with parameters
	Ticket(const Ticket& newTicket); //copy constructor

	//Destructor
	~Ticket();




}






