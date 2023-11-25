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
}

void Venue::setShow(Show** shows)
{
	if (shows != 0) this->shows = shows;
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

Show** Venue::getShow()
{
	Show** newtext = new Show;
}

//Constructors

Venue::Venue() { }

Venue::Venue(const char* name, const char* adress, unsigned int noofrows, unsigned int noofcolumns, unsigned int totalseats)
{
	this->setName(name);
	this->setAdress(adress);
	this->setNoofRows(noofrows);
	this->setNoofColumns(noofcolumns);

}





???







