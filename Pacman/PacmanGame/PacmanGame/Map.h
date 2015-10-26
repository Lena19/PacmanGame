#pragma once
#ifndef MAP_H
#define MAP_H

#include "Coordinate.h"
#include <vector>
#include <iostream>

enum CellOfMap {empty, wall};
	
class Map{

public:

	Map(int height, int width);
	Map(std::istream & input);

	bool IsEmpty (const Coordinate& coordinate) const;

	std::vector<std::vector<CellOfMap>> GetMap() const;

	int GetHeight() const;
	int GetWidth() const;

private:

	std::vector<std::vector<CellOfMap>> _map;
};

#endif