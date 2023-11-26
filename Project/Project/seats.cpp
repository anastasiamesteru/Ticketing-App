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

Seat::Seat() { }



Seat::Seat(unsigned int SeatNumber, SeatType type, SeatType type, SeatType2 type2)
{
	this->setSeatNumber(SeatNumber);
	this->setType(type);
	this->setType2(type2);
}

//Operators

ostream& operator <<(ostream& out, const Seat& newseat)
{
	out << "The seat with the number is:" << newseat.SeatNumber << "is a " << newseat.type << "and " << newseat.type2 << "seat";
	return out;
}
istream& operator >> (istream& in, Seat& seat);
{
	in >> newseat.SeatNumber >> newseat.type >> newseat.type2;
	return in;
}

Seat::operator string()
{
	stringstream ss;
	ss<< "The seat with the number is:" << newseat.SeatNumber << "is a " << newseat.type << "and " << newseat.type2 << "seat";
	return ss.str();
}

bool Seat::operator==(const Seat& newseat)
{
	if (this == newseat) return true;
	if (this->SeatNumber != newseat.SeatNumber) return false;
	if (this->type != newseat.type) return false;
	if (this->type2 != newseat.type2) return false;
	return false;
}

bool Seat::operator!=(const Seat& newseat)
{
	return !(*this == newseat);
}
