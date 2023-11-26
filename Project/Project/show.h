#pragma once
#include <iostream>
#include <string>
#include <date.h>

class Show

{
private:
	unsigned int shownumber = 0;
	char* name = nullptr;
	Date* starttime = nullptr;
	unsigned int duration = 0;


	// Setters

	void setShownumber(unsigned int shownumber);
	char* setName(const char* name);
	void setStartTime(Date* starttime);
	void setDuration(unsigned int duration);


public:

	//Getters

	int getShowNumber();
	int getName();
	Date* getStartTime();
	int getDuration();

	//Constructors

	Show(); //default constructor
	Show(unsigned int shownumber, const char* name, Date* starttime, unsigned int duration) //constructor with parameters
	Show(const Show& newShow); //copy constructor

	//Destructor
	~Show();

	//Operators

	ostream& operator << (ostream& out, const Show& newshow);
	istream& operator >> (istream& in, Show& newshow);

	Show operator = (const Show& newshow);

	explicit operator string();

	bool operator == (const Show& newshow);
	bool operator != (const Show& newshow);
};
