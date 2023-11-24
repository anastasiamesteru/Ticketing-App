#pragma once
#include <iostream>
using namespace std;

class Venue
{
private:

	char* name = nullptr;
	char* adress = nullptr;
	unsigned int noofrows = 0;
	unsigned int noofcolumns = 0;
	unsigned int totalseats = 0;

	
	//Setters
	
	void setName( const char* name);
	void setAdress(const char* adress;
	void setNoofRows(unsigned int noofrows);
	void setNoofColumns(unsigned int noofcolumns);
	void setTotalSeats(unsigned int totalseats);
	

public:
	
	//Getters
	
	char* getName();
	char* getAdress();
	int getNoofRows();
	int getNoofColumns();

	//Constructors

	Venue();
	Venue(char* name, char* adress, unsigned int noofrows, unsigned int noofcolumns, unsigned int totalseats);

	// Destructor

	~Venue();




};
