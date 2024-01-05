#include "show.h"
#include "deepcopy.h"


//Setters

void Show::setShowNumber(unsigned int shownumber)
{
	if (shownumber > 0) this->shownumber = shownumber;
	else throw;
}

void Show::setName(const char* name)
{
	if (strlen(name) > 1) this->name = DeepCpy::DeepCopy(name);
	else throw;
}


void Show::setDuration(unsigned int duration)
{
	if (duration != 0) this->duration = duration;
	else throw;
}

void Show::setDate(const char* newdate)
{
	if (strlen(newdate) != 10) throw;
	if (newdate[2] != '/' || newdate[5] != '/') throw;
	strcpy_s(this->date, strlen(newdate) + 1, newdate);
}

//Getters

int Show::getShowNumber()
{
	return this->shownumber;
}

char* Show::getName()
{
	return DeepCpy::DeepCopy(this->name);
}

int Show::getDuration()
{
	return this->duration;
}
char* Show::getDate()
{
	return DeepCpy::DeepCopy(this->date);

}
//Constructors

Show::Show() { }

Show::Show(unsigned int shownumber, const char* name, unsigned int duration, const char* date)
{
	this->setShowNumber(shownumber);
	this->setName(name);
	this->setDate(date);
	this->setDuration(duration);

}

Show::Show(const Show& newShow)
{
	this->setShowNumber(newShow.shownumber);
	this->setName(newShow.name);
	this->setDate(newShow.date);
	this->setDuration(newShow.duration);


}

Show::~Show()
{
	delete[] this->name;
}

//Operators


ostream& operator<<(ostream& out, const Show& newshow)
{
	out << "The show with the number" << newshow.shownumber << "and with the name" << newshow.name << "starts at" << newshow.date << "and has a duration of" << newshow.duration;
	return out;
}

istream& operator>>(istream& in, Show& newshow)
{
	in >> newshow.shownumber >> newshow.name >> newshow.date >> newshow.duration;
	return in;
}

Show Show::operator=(const Show& newshow)
{

	this->setShowNumber(newshow.shownumber);
	this->setName(newshow.name);
	this->setDate(newshow.date);
	this->setDuration(newshow.duration);
	return *this;
}

bool Show::operator==(const Show& newshow)
{
	if (this == &newshow) return true;
	if (this->shownumber != newshow.shownumber) return false;
	if (strcmp(this->name, newshow.name) != 0) return false;
	if (strcmp(this->date, newshow.date) != 0)
		if (this->duration != newshow.duration) return false;
	return true;
}

bool Show::operator!=(const Show& newshow)
{
	return !(*this == newshow);
}

