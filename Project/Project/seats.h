#pragma once
#include <iostream>
using namespace std;

enum class SeatType {FREE, RESERVED};

class Seat
{
private:
	unsigned int SeatNumber = 0;
	SeatType type = FREE;

	unsigned int TotalSeats = 0;

	// Setters

	void setSeatNumber(unsigned int SeatNumber);
	void setType(SeatType);

public:

	//Getters

	int getSeatNumber();
	int getSeatType();

	//Constructors

	Seat(); // default constructor
	Seat(unsigned int SeatNumber, SeatType type); //    Constructor with 2 parameters
	
}
