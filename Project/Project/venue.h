#pragma once
#include <iostream>
#include <sstream>
#include <ostream>
#include <istream>
#include "show.h"


using namespace std;

class Venue
{
private:

	char* name = nullptr;
	char* adress = nullptr;
	unsigned int totalseats = 0;
	Show** shows = nullptr;
	unsigned int ongoingshows = 0;
	static unsigned int total_venues;


	//Setters

	void setName(const char* name);
	void setAdress(const char* adress);
	void setTotalSeats(unsigned int totalseats);
	void setShow(Show** shows);
	void setOngoingShows(unsigned int ongoingshows = 0);

public:

	//Getters

	char* getName();
	char* getAdress();
	int getTotalSeats();
	Show** getShow();
	int getOngoingShows();

	//Constructors

	Venue(); //default constructor
	Venue(const char* name, const char* adress, unsigned int totalseats, Show** shows, unsigned int ongoingshows);//constructor with parameters
	Venue(const Venue& newVenue);

	// Destructor
	~Venue();

	//Operators

	friend ostream& operator << (ostream& out, const Venue& newvenue);
	friend istream& operator >> (istream& in, Venue& newvenue);

	Venue operator = (const Venue& newvenue);

	bool operator == (const Venue& newvenue);
	bool operator != (const Venue& newvenue);

};