#pragma once
#include <iostream>
using namespace std;

enum class TicketType { NORMAL, VIP };
enum class  TicketPayMethod { CASH, CARD };

class Ticket

{
private:
	unsigned int ticketnumber = 0;
	Show* show;
	bool validity = false; ? ?
		
		// Setters
	void setShow(Show * show);
	void setTicketNumber(unsigned int ticketnumber);
	void setValidity(bool validity);


public: 

	// Getters
	Show* getShow();
	int getTicketNumber();
	int getValidity(;

	Ticket(); //default constructor




}






