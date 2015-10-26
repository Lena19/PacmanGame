#include "Coordinate.h"

Coordinate::Coordinate(int x, int y){
	this->_x = x;
	this->_y = y;
}

void Coordinate::SetX(int x){
	this->_x = x;
}
void Coordinate::SetY(int y){
	this->_y = y;
}

int Coordinate::GetX()const throw(){
	return this->_x;
}
int Coordinate::GetY()const throw(){
	return this->_y;
}

bool Coordinate::IsNull()const _NOEXCEPT{
	return false;
}

Coordinate& Coordinate::operator+=(const Coordinate& coordinate){
	_x += coordinate._x;
	_y += coordinate._y;
	
	return *this;
}
Coordinate& Coordinate::operator-=(const Coordinate& coordinate){
	_x -= coordinate._x;
	_y -= coordinate._y;

	return *this;
}

const Coordinate operator+(const Coordinate& coordinate1, const Coordinate& coordinate2){
	return Coordinate(coordinate1.GetX() + coordinate2.GetX(), coordinate1.GetY() + coordinate2.GetY());
}
const Coordinate operator-(const Coordinate& coordinate1, const Coordinate& coordinate2){
	return Coordinate(coordinate1.GetX() - coordinate2.GetX(), coordinate1.GetY() - coordinate2.GetY());
}

const bool operator==(const Coordinate& coordinate1, const Coordinate& coordinate2){
	return coordinate1.GetX() == coordinate2.GetX() && coordinate1.GetY() == coordinate2.GetY();
}
const bool operator!=(const Coordinate& coordinate1, const Coordinate& coordinate2){
	return coordinate1.GetX() != coordinate2.GetX() && coordinate1.GetY() != coordinate2.GetY();
}