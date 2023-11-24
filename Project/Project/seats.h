#pragma once
#include <iostream>
using namespace std;

enum class SeatType {FREE, RESERVED};
enum class SeatType2 {NORMAL,VIP};

class Seat
{
private:
	unsigned int SeatNumber = 0;
	SeatType type = SeatType::FREE;
	SeatType2 type2 = SeatType::NORMAL;


	// Setters

	void setSeatNumber(unsigned int SeatNumber);
	void setType(SeatType);
	void setType2(SeatType2);
	

public:

	//Getters

	int getSeatNumber();
	SeatType getSeatType();
	SeatType2  getSeatType2();

	//Constructors

	Seat(); // default constructor
	Seat(unsigned int SeatNumber, SeatType type, SeatType type, SeatType2 type2); //    Constructor with 2 parameters
	
	//Destructor
	~Seat();

}
