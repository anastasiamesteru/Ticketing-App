#pragma once
#include <iostream>
#include <string>

class Show

{
private:
	unsigned int event.numnber = 0;
	char* name = nullptr;
	//??unsigned int starttime = 0;
	unsigned int duration = 0;


	// Setters

	void setEventNumber(unsigned int event.numnber);
	char* setName(char* name);
	//void setStartTime();
	void setDuration(unsigned int duration);


public:

	//Getters

	int getEventNumber();
	int getName();
	//int getStartTime
	int getDuration();



};