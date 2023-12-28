#pragma once
#include <iostream>
#include <sstream>
#include <ostream>
#include <istream>

using namespace std;

enum class SeatType { FREE, RESERVED };
enum class SeatType2 { NORMAL, VIP };

class Seat
{
private:
	unsigned int SeatNumber = 0;
	SeatType type = SeatType::FREE;
	SeatType2 type2 = SeatType2::NORMAL;
	static unsigned TotalSeats;


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
	Seat(unsigned int SeatNumber, SeatType type, SeatType2 type2); //    Constructor with 3 parameters

	//Seat type operators

	friend ostream& operator << (std::ostream& out, const SeatType& type);
	friend istream& operator >> (std::istream& in, SeatType& type);

	friend ostream& operator << (std::ostream& out, const SeatType2& type2);
	friend istream& operator >> (std::istream& in, SeatType2& type2);

	//Operators

	friend ostream& operator << (ostream& out, const Seat& newseat);
	friend istream& operator >> (istream& in, Seat& newseat);

	bool operator == (const Seat& newseat);
	bool operator != (const Seat& newseat);


};

