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

Show::Show(unsigned int eventnumnber, const char* name, Date* starttime, unsigned int duration)
{
	this->setShownumber;
	this->setName;
	this->setStartTime;
	this->setDuration;

}

Show::Show(const Show& newShow)
{	
	this->setShownumber(newshownumber.shownumber);
	this->setName(newname.name);
	this->setStartTime(newstarttime.starttime);
	this->setDuration(newduration.duration);

	
}


