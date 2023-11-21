#include<date.h>

// Setters validation

void setMinutes(unsigned int minutes)
{
	if (minutes < 60)
		this->minutes = minutes;
	else throw;
}

void setHour(unsigned int hour)
{	
	if (hour < 24) this->hour = hour;
	else throw;
}

void setDay(unsigned int day)
{
	if (day 24) this->hour = hour;
	else throw;
}
void setMonth(Month month)
{
	if (month <= 12) this->month = month;
	else throw;
}

void setYear(unsigned int year)
{
	if (year < max_year && year > 2010)	this->year = year;
	else throw;
}

