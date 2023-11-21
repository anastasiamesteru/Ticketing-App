#pragma once
#include <iostream>
#include <string>
using namespace std;

class month
{
	JANUARY = 1,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};

class Date
{
private:

	unsigned int minutes = 0;
	unsigned int hour = 0;
	//month month = JANUARY;??
	unsigned int day = 0;
	unsigned int year = 2010;

	static const int MAX_YEAR = 2050;

	// Setters

	void setMinutes(unsigned int minutes);
	void setHour(unsigned int hour);
	void setMonth(month month);
	void setYear(unsigned int year);
	void setDay(unsigned int day);


public:

	// Getters

	unsigned int getMinutes();
	unsigned int getHour();
	month getMonth();
	unsigned int getYear();
	unsigned int getDay();

};
