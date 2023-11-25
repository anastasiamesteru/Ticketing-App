#include<date.h>

// Setters validation

void Date::setMinutes(unsigned int minutes)
{
	if (minutes < 60)
		this->minutes = minutes;
	else throw;
}

void Date::setHour(unsigned int hour)
{	
	if (hour < 24) this->hour = hour;
	else throw;
}

void Date::setDay(unsigned int day)
{
	if (day < 31 && month == Month::JANUARY) this->day = day;
	if (day < 28 && month == Month::FEBRUARY) this->day = day;
	if (day < 31 && month == Month::MARCH) this->day = day;
	if (day < 30 && month == Month::APRIL) this->day = day;
	if (day < 31 && month == Month::MAY) this->day = day;
	if (day < 30 && month == Month::JUNE) this->day = day;
	if (day < 31 && month == Month::JULY) this->day = day;
	if (day < 31 && month == Month::AUGUST) this->day = day;
	if (day < 30 && month == Month::SEPTEMBER) this->day = day;
	if (day < 31 && month == Month::OCTOBER) this->day = day;
	if (day < 30 && month == Month::NOVEMBER) this->day = day;
	if (day < 31 && month == Month::DECEMBER) this->day = day;
	if (day == 0) throw;
}

void Date::setMonth(Month month)
{
	if (month <= 12) this->month = month;
	else throw;
}

void Date::setYear(unsigned int year)
{
	if (year < max_year && year > 2010)	this->year = year;
	else throw;
}


// Getters

int Date::getMinutes() { return this->minutes; }

int Date::getHour() { return this->hour; }

int Date::getDay() { return this->day; }

Month Date::getMonth() { return this->month; }

int Date::getYear() { return this->year; }



//Constructors

Date::Date() { }

Date::Date(unsigned int minutes, unsigned int hour, unsigned int day, Month month, unsigned int year)
{
	this->setMinutes(minutes);
	this->setHour(hour);
	this->setDay(day);
	this->setMonth(month);
	this->setYear(year);

}

//Operators

ostream& operator << (ostream& out, const Date& date)

{
	out << date.minutes << "/" << date.hour << "/" << date.day << "/" << date.month << "/" << date.year;
}

istream& operator >> (istream& in, Date& date)

{
	in >> date.minutes >> date.hour >> date.day >> date.month >> date.year;
}

