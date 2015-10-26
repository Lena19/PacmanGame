#pragma once
#ifndef COORDINATE_H
#define COORDINATE_H

#include <exception>

class Coordinate {

public:

	Coordinate(int x, int y);
	
	void SetX(int x);
	void SetY(int y);

	int GetX()const throw();
	int GetY()const throw();

	virtual bool IsNull()const _NOEXCEPT;
	
	Coordinate& operator+=(const Coordinate& coordinate);
	Coordinate& operator-=(const Coordinate& coordinate);

private:

	int _x;
	int _y;

};

const Coordinate operator+(const Coordinate& coordinate1, const Coordinate& coordinate2);
const Coordinate operator+(const Coordinate& coordinate1, const Coordinate& coordinate2);

const bool operator==(const Coordinate& coordinate1, const Coordinate& coordinate2);
const bool operator!=(const Coordinate& coordinate1, const Coordinate& coordinate2);

#endif