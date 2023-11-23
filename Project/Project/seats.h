#pragma once
#include <iostream>
using namespace std;

enum class SeatType {FREE, RESERVED};
enum class SeatType2 {NORMAL,VIP};

class Seat
{
private:
	unsigned int SeatNumber = 0;
	SeatType type = FREE;
	SeatType2 type = NORMAL;
	unsigned int totalseats = 0;

	// Setters

	void setSeatNumber(unsigned int SeatNumber);
	void setType(SeatType);

public:

	//Getters

	int getSeatNumber();
	SeatType getSeatType();

	//Constructors

	Seat(); // default constructor
	Seat(unsigned int SeatNumber, SeatType type); //    Constructor with 2 parameters
	
}
