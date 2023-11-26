#include "venue.h"
#include <deepcopy.h>

//Setters validations


void Venue::setName(const char* name)
{
	if (strlen(name) > 1) this->name = DeepCopy::DeepCopy(name);
	else throw;
}

void Venue::setAdress(const char* adress)
{
	if (strlen(adress) > 1) this->adress = DeepCopy::DeepCopy(adress);
	else throw;
}
void Venue::setNoofRows(unsigned int noofrows)
{
	if (noofrows > 0) this->noofrows = noofrows;
	else throw;
}

void Venue::setNoofColumns(unsigned int noofcolumns)
{
	if (noofcolumns > 0) this->noofcolumns = noofcolumns;
	else throw;
}

void Venue::setTotalSeats(unsigned int totalseats)
{
	if (totalseats > 0) this->totalseats = totalseats;
	else throw;
}

void Venue::setShow(Show** shows)
{
	if (shows != 0) { this->shows = new Show * [ongoingshows]; }
	for (i = 0; i < ongoingshows; i++) { this->shows[1] = new (Show * (shows[i]); }
	else throw;
}

void Venue::setOngoingShows(unsigned int ongoingshows)
{
	if (ongoingshows != 0) this->ongoingshows = ongoingshows;
	else throw;
}


//Getters

char* Venue::getName()
{
	return DeepCopy::DeepCopy(this->name);
}

char* Venue::getAdress()
{
	return DeepCopy::DeepCopy(this->adress);
}

int Venue::getNoofRows()
{
	return this-> noofrows;
}

int Venue::getNoofColumns()
{
	return this -> noofcolumns;
}

int Venue::getTotalSeats()
{
	return this -> totalseats;
}

Show** Venue::getShow()
{
	Show** newtext = new Show * [ongoingshows];
	for (i = 0; i < ongoingshows; i++) newtext[i] = new Show(*(this->shows[i]));
	return newtext;
}

int Venue::getOngoingShows()
{
	return this->ongoingshows;
}

//Constructors

Venue::Venue() { }

Venue::Venue(const char* name, const char* adress, unsigned int noofrows, unsigned int noofcolumns, unsigned int totalseats, Show** shows, unsigned int ongoingshows)
{
		this->setName(name);
		this->setAdress(adress);
		this->setNoofRows(noofrows);
		this->setNoofColumns(noofcolumns);
		this->setTotalSeats(totalseats);
		this->setShow(shows);
		this->setOngoingShows(ongoingshows);
}

Venue::Venue(const Venue& newVenue)
{
	this->setName(newVenue.name);
	this->setAdress(newVenue.adress);
	this->setNoofRows(newVenue.noofrows);
	this->setNoofColumns(newVenue.noofcolumns);
	this->setTotalSeats(newVenue.totalteats);
	this->setShow(newVenue.Show);
	this->setOngoingShows(newVenue.ongoingshows);
}

Venue::~Venue()
{
	delete[] name this->name = nullptr;
	delete[] adress this->adress = nullptr;
	delete[] Show this->Show = nullptr;

}

//Operators
ostream& Venue::operator<<(ostream& out, const Venue& newvenue)
{
	out << "The show named" << newvenue.name << "located at" << newvenue.adress << "has" << newvenue.noofrows << "rows and " << newvenue.noofcolumns << "in total" << newvenue.totalteats << "seats"
		<< "for the show" << newvenue.shows << "and currently has" << newvenue.ongoingshows << "ongoing events";
	return out;
}

istream& Venue::operator>>(istream& in, Venue& newvenue)
{
	in >> newvenue.name >> newvenue.adress >> newvenue.noofrows >> newvenue.noofcolumns >> newvenue.totalteats >> newvenue.shows >> newvenue.ongoingshows;
	return in;
}

	
Venue Venue::operator=(const Venue& newvenue)
{
	this->setName(newvenue.name);
	this->setAdress(newvenue.adress;
	this->setNoofRows(newvenue.noofrows);
	this->setNoofColumns(newvenue.noofcolumns);
	this->setShow(newvenue.shows);
	this->setOngoingShows(newvenue.ongoingshows);
	return *this;
}

Venue::operator string()
{
	stringstream ss;
	ss<< "The show named" << newvenue.name << "located at" << newvenue.adress << "has" << newvenue.noofrows << "rows and " << newvenue.noofcolumns << "in total" << newvenue.totalteats << "seats"
		<< "for the show" << newvenue.shows << "and currently has" << newvenue.ongoingshows << "ongoing events";
	return ss.str();

}

bool Venue::operator==(const Venue& newvenue)
{
	if (this == newvenue) return true;
	if(strcmp(this->name, newvenue.name) != 0 ) return false;
	if (strcmp(this->adress, newvenue.adress) != 0) return false;
	if (this->noofrows != newvenue.noofrows) return false;
	if (this->noofcolumns != newvenue.noofcolumns) return false;
	if (this->shows != newvenue.shows) return false;
	if (this->ongoingshows != newvenue.ongoingshows) return false;
	return true;
}

bool Venue::operator!=(const Venue& newvenue)
{
	return !(*this == newvenue);
}







