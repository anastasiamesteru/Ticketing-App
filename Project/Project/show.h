#pragma once
#include <iostream>
#include <string>
#include <date.h>

class Show

{
private:
	unsigned int showmumnber = 0;
	char* name = nullptr;
	Date* starttime = nullptr;
	unsigned int duration = 0;


	// Setters

	void setShownumber(unsigned int shownumnber);
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
	Show(unsigned int shownumnber, const char* name, Date* starttime, unsigned int duration) //constructor with parameters
	Show(const Show& newShow); //copy constructor

	//Destructor
	~Show();

	//Operators

	ostream& operator << (ostream& out, const Show& show);
	istream& operator >> (istream& in, Show& show);
};