#include "deepcopy.h"
#include "venue.h"
#include "show.h"

unsigned int Venue::total_venues = 0;

//Setters validations


void Venue::setName(const char* name)
{
	if (strlen(name) > 1) this->name = DeepCpy::DeepCopy(name);
	else throw;
}

void Venue::setAdress(const char* adress)
{
	if (strlen(adress) > 1) this->adress = DeepCpy::DeepCopy(adress);
	else throw;
}

void Venue::setTotalSeats(unsigned int totalseats)
{
	if (totalseats > 0) this->totalseats = totalseats;
	else throw;
}

void Venue::setShow(Show** shows)
{
	int i = 0;
	if (shows = nullptr)
	{
		this->shows = new Show * [ongoingshows];
	}
	else throw;
	for (i = 0; i <= ongoingshows; i++)
	{
		this->shows[i] = new Show(*(shows[i]));
	}

}

void Venue::setOngoingShows(unsigned int ongoingshows)
{
	if (ongoingshows != 0) this->ongoingshows = ongoingshows;
	else throw;
}


//Getters

char* Venue::getName()
{
	return DeepCpy::DeepCopy(this->name);
}

char* Venue::getAdress()
{
	return DeepCpy::DeepCopy(this->adress);
}


int Venue::getTotalSeats()
{
	return this->totalseats;
}

Show** Venue::getShow()
{
	Show** newtext = new Show * [ongoingshows];
	//for (i = 0; i < ongoingshows; i++) newtext[i] = new Show(*(this->shows[i]));
	return newtext;
}

int Venue::getOngoingShows()
{
	return this->ongoingshows;
}

//Constructors

Venue::Venue() { }

Venue::Venue(const char* name, const char* adress, unsigned int totalseats, Show** shows, unsigned int ongoingshows)
{
	this->setName(name);
	this->setAdress(adress);
	this->setTotalSeats(totalseats);
	this->setShow(shows);
	this->setOngoingShows(ongoingshows);
	++total_venues;
}

Venue::Venue(const Venue& newVenue)
{
	this->setName(newVenue.name);
	this->setAdress(newVenue.adress);
	this->setTotalSeats(newVenue.totalseats);
	this->setOngoingShows(newVenue.ongoingshows);
	++total_venues;
}

Venue::~Venue()
{
	delete[] name;
	this->name = nullptr;
	delete[] adress;
	this->adress = nullptr;
	--total_venues;
}

//Operators
ostream& operator<<(ostream& out, const Venue& newvenue)
{
	out << "The show named" << newvenue.name << "located at" << newvenue.adress << "has a total of" << newvenue.totalseats << "seats"
		<< "for the show" << newvenue.shows << "and currently has" << newvenue.ongoingshows << "ongoing events";
	return out;
}
istream& operator>>(istream& in, Venue& newvenue)
{
	//in >> newvenue.name >> newvenue.adress >> newvenue.totalseats >> newvenue.shows >> newvenue.ongoingshows;
	return in;
}

Venue Venue::operator=(const Venue& newvenue)
{
	this->setName(newvenue.name);
	this->setAdress(newvenue.adress);
	this->setShow(newvenue.shows);
	this->setOngoingShows(newvenue.ongoingshows);
	return *this;
}


bool Venue::operator==(const Venue& newvenue)
{
	if (this == &newvenue) return true;
	if (strcmp(this->name, newvenue.name) != 0) return false;
	if (strcmp(this->adress, newvenue.adress) != 0) return false;
	if (this->shows != newvenue.shows) return false;
	if (this->ongoingshows != newvenue.ongoingshows) return false;
	return true;
}

bool Venue::operator!=(const Venue& newvenue)
{
	return !(*this == newvenue);
}







