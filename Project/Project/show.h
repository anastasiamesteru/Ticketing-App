#pragma once
#include <iostream>
#include <string>
#include <ostream>
#include <istream>
#include <sstream>

using namespace std;

class Show

{
private:
	unsigned int shownumber = 0;
	char* name = nullptr;
	unsigned int duration = 0;
	char* date = nullptr; // dd/mm/yyyy


	// Setters

	void setShowNumber(unsigned int shownumber);
	void setName(const char* name);
	void setDuration(unsigned int duration);
	void setDate(const char* date);

public:

	static unsigned int total_shows;

	//Getters

	int getShowNumber();
	char* getName();
	int getDuration();
	char* getDate();

	//Constructors

	Show(); //default constructor
	Show(unsigned int shownumber, const char* name, unsigned int duration, const char* date);//constructor with parameters
	Show(const Show& newShow); //copy constructor

	//Destructor
	~Show();

	//Operators

	friend ostream& operator << (ostream& out, const Show& newshow);
	friend istream& operator >> (istream& in, Show& newshow);

	Show operator = (const Show& newshow);

	bool operator == (const Show& newshow);
	bool operator != (const Show& newshow);
};

//derived class
class Drama :public Show
{
private:
	string director;
public:
	Drama(unsigned int shownumber, const char* name, unsigned int duration, const char* date, string director) : Show(shownumber, name, duration, date)
	{
		this->director = director;
	}
};




