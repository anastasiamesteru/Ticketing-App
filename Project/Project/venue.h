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
	unsigned int totalseats = 0;
	Show** shows = nullptr;
	unsigned int ongoingshows = 0;

	
	//Setters
	
	void setName(const char* name);
	void setAdress(const char* adress;
	void setNoofRows(unsigned int noofrows);
	void setNoofColumns(unsigned int noofcolumns);
	void setTotalSeats(unsigned int totalseats);
	void setShow(Show** shows);
	void setOngoingShows(unsigned int ongoingshows = 0);

public:
	
	//Getters
	
	char* getName();
	char* getAdress();
	int getNoofRows();
	int getNoofColumns();
	int getTotalSeats();
	Show** getShow();
	int getOngoingShows();

	//Constructors

	Venue(); //default constructor
	Venue(const char* name,const char* adress, unsigned int noofrows, unsigned int noofcolumns, unsigned int totalseats, Show** shows, unsigned int ongoingshows); //constructor with parameters
	Venue(const Venue& newVenue);

	// Destructor
	~Venue();

	//Operators

	ostream& operator << (ostream& out, const Venue& newvenue);
	istream& operator >> (istream& in, Venue& newvenue);

	Venue operator = (const Venue& newvenue);

	explicit operator string();
	
	bool operator == (const Venue& newvenue);
	bool operator != (const Venue& newvenue);





};
