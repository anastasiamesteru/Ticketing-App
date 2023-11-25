#pragma once
#include <iostream>
#include <show.h>

using namespace std;

class Venue
{
private:

	char* name = nullptr;
	char* adress = nullptr;
	unsigned int noofrows = 0;
	unsigned int noofcolumns = 0;
	//unsigned int totalseats = 0;
	Show** shows = nullptr;

	
	//Setters
	
	void setName(const char* name);
	void setAdress(const char* adress;
	void setNoofRows(unsigned int noofrows);
	void setNoofColumns(unsigned int noofcolumns);
	void setTotalSeats(unsigned int totalseats);
	void setShow(Show** shows);

public:
	
	//Getters
	
	char* getName();
	char* getAdress();
	int getNoofRows();
	int getNoofColumns();
	Show** getShow();

	//Constructors

	Venue(); //default constructor
	Venue(const char* name,const char* adress, unsigned int noofrows, unsigned int noofcolumns, unsigned int totalseats); //constructor with parameters
	Venue(const Venue& newVenue);

	// Destructor
	~Venue();

	//Operators

	ostream& operator << (ostream& out, const Venue& venue);
	istream& operator >> (istream& in, Venue& venue);

	Venue operator = (const Venue& venue));
};
