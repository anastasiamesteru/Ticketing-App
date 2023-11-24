#include<seats.h>

//Setters


void setSeatNumber(unsigned int SeatNumber)
{
	if (SeatNumber != 0) this->SeatNumber;
	else throw;
}

void Seat::setType(SeatType newtype)

{
	if (newtype > 2 || newtype < 0) this->type = SeatType::FREE;
	else this->type = newtype;
}

void Seat::setType2(SeatType2 newtype2)
{
	if (newtype2 > 2 || newtype < 0) this->type2 = SeatType2::NORMAL;
	else this->type = newtype2;
}


//Getters

int Seat::getSeatNumber()
{
	return this->SeatNumber;
}

SeatType Seat::getSeatType()
{
	return this->type;
}

SeatType2 Seat::getSeatType2()
{
	return this->type2;
}

// Constructors

Seat::Seat() {}

Seat::Seat(unsigned int SeatNumber, SeatType type, SeatType type, SeatType2 type2)
{
	this->setSeatNumber(SeatNumber);
	this->setType(type);
	this->setType2(type2);
}

// Destructor

Seat::~Seat() { }

