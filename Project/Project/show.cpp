#include "show.h"
#include<deepcopy.h>


//Setters

void Show::setShowNumber(unsigned int eventnumnber)
{
	if (eventnumnber > 0) this->eventnumnber = eventnumnber;
	else throw;
}

char* Show::setName(const char* name)
{
	if (strlen(name) > 1) this->name = DeepCopy::DeepCopy(name);
	else throw;
}

void Show::setStartTime(Date* starttime)
{
	if (starttime != 0) this->starttime = Date* (starttime);
	else throw;

}

void Show::setDuration(unsigned int duration)
{
	if (duration != 0) this->duration = duration;
	else throw;
}

//Getters

int Show::getShowNumber()
{
	return this->eventnumnber;
}

int Show::getName()
{
	return DeepCopy::DeepCopy(this->name);
}

Date* Show::getStartTime()
{
	Date* newtext = new Date(this->starttime);
	return newtext;
}

int Show::getDuration()
{
	return this->duration;
}

//Constructors

Show::Show() { }

Show::Show(unsigned int shownumber, const char* name, Date* starttime, unsigned int duration)
{
	this->setShownumber(shownumber);
	this->setName(name);
	this->setStartTime(starttime);
	this->setDuration(duration);

}

Show::Show(const Show& newShow)
{	
	this->setShownumber(newShow.shownumber);
	this->setName(newShow.name);
	this->setStartTime(newShow.starttime);
	this->setDuration(newShow.duration);

	
}

Show::~Show()
{
	delete[] name this->name = nullptr;
}

//Operators


ostream& Show::operator<<(ostream& out, const Show& newshow)
{
	out << "The show with the number" << newshow.shownumber << "and with the name" << newshow.name << "starts at" << newshow.starttime << "and has a duration of" << newshow.duration;
	return out;
}

istream& Show::operator>>(istream& in, Show& newshow)
{
	in >> newshow.shownumber << newshow.name << newshow.starttime << newshow.duration;
	return in;
}

Show Show::operator=(const Show& newshow)
{

	this->setShownumber(newshow.shownumber);
	this->setName(newshow.name);
	this->setStartTime(newshow.starttime);
	this->setDuration(newshow.duration);
	return *this;
}

Show::operator string()
{
	stringstream ss;
	ss<< "The show with the number" << newshow.shownumber << "and with the name" << newshow.name << "starts at" << newshow.starttime << "and has a duration of" << newshow.duration;
	return ss.str();
}

bool Show::operator==(const Show& newshow)
{
	if (this == newshow) return true; 
	if (this->shownumber != newshow.shownumber) return false;
	if (strcmp(this->name, newshow.shownumber) != 0) return false;
	if (this->starttime != newshow.starttime) return false;
	if (this->duration != newshow.duration) return false;
	return true;
}

bool Show::operator!=(const Show& newshow)
{
	return !(*this == newshow);
}

