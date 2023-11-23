#pragma once


class Venue
{
private:

	char* name = nullptr;
	char* adress = nullptr;
	unsigned int noofrows = 0;
	unsigned int noofcolumns = 0;
	


	//Setters

	void setName(char* name);
	void setAdress(char* adress;
	void setNoofRows(unsigned int noofrows);
	void setNoofColumns(unsigned int noofcolumns);
	

public:
	
	//Getters
	
	int getName();
	int getAdress();




};
