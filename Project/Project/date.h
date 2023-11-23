#pragma once
#include <iostream>
using namespace std;

enum class Month
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
	unsigned int day = 0;
	Month Month = Month :: JANUARY;
	unsigned int year = 2010;

	static const int max_year = 2050;

	// Setters 

	void setMinutes(unsigned int minutes);
	void setHour(unsigned int hour);
	void setDay(unsigned int day);
	void setMonth(Month month);
	void setYear(unsigned int year);
	
public:

	// Getters

	int getMinutes();
	int getHour();
	int getDay();
	Month getMonth();
	int getYear();


	// Constructors

	Date(); // default constructor
	Date(unsigned int minutes, unsigned int hour, unsigned int day, Month month, unsigned int year); // constructor with parameters

};

