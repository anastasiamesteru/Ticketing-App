#include "seats.h"

unsigned int Seat::total_seats = 0;
//Setters


void Seat::setSeatNumber(unsigned int SeatNumber)
{
	if (SeatNumber != 0) this->SeatNumber;
	else throw;
}

void Seat::setType(SeatType newtype)

{
	if ((int)newtype > 2 || (int)newtype < 0) this->type = SeatType::FREE;
	else this->type = newtype;
}

void Seat::setType2(SeatType2 newtype2)
{
	if ((int)newtype2 > 2 || (int)newtype2 < 0) this->type2 = SeatType2::NORMAL;
	else this->type2 = newtype2;
}


//Getters

int Seat::getTotalSeats()
{
	return ;
}

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

Seat::Seat() { ++total_seats; }

Seat::Seat(unsigned int SeatNumber, SeatType type, SeatType2 type2)
{
	this->setSeatNumber(SeatNumber);
	this->setType(type);
	this->setType2(type2);
	++total_seats;
}

Seat::~Seat()
{
	--total_seats;
}

//Seat type operators 

ostream& operator<<(std::ostream& out, const SeatType& type)
{
	switch (type)
	{
	case SeatType::FREE:
		out << "free"; break;
	case SeatType::RESERVED:
		out << "reserved"; break;
	default:
		out << "unknown";
	}
	return out;
}

istream& operator>>(istream& in, SeatType& type)
{
	int i = 0;
	if (!(in >> i) || i > 2)
	{
		type = SeatType::FREE;
		return in;
	}
	else
	{
		type = SeatType::RESERVED;
		return in;
	}
}

ostream& operator<<(std::ostream& out, const SeatType2& type2)
{
	switch (type2)
	{
	case SeatType2::NORMAL:
		out << "normal"; break;
	case SeatType2::VIP:
		out << "VIP"; break;
	default:
		out << "unknown";
	}
	return out;
}

istream& operator>>(istream& in, SeatType2& type2)
{
	int i = 0;
	if (!(in >> i) || i > 2)
	{
		type2 = SeatType2::NORMAL;
		return in;
	}
	else
	{
		type2 = SeatType2::VIP;
		return in;
	}
}

//Operators

ostream& operator <<(ostream& out, const Seat& newseat)
{
	out << "The seat with the number is:" << newseat.SeatNumber << "is a " << (int)newseat.type << "and " << (int)newseat.type2 << "seat";
	return out;
}

istream& operator >> (istream& in, Seat& newseat)
{
	//in >> newseat.SeatNumber >> newseat.type >> newseat.type2;
	return in;
}


bool Seat::operator==(const Seat& newseat)
{
	if (this == &newseat) return true;
	if (this->SeatNumber != newseat.SeatNumber) return false;
	if (this->type != newseat.type) return false;
	if (this->type2 != newseat.type2) return false;
	return false;
}

bool Seat::operator!=(const Seat& newseat)
{
	return !(*this == newseat);
}
