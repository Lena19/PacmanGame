#pragma once
#ifndef MOVEALGORITHM_H
#define MOVEALGORITHM_H

#include "Coordinate.h"
#include "Map.h"

class MoveAlgorithm{

public:
	Coordinate Move(const Coordinate& currentCoordinate, const Coordinate& targetCoordinate, const std::vector<std::vector<CellOfMap>> map);

protected:
	bool CheckCoordinate(const Coordinate& currentCoordinate, const std::vector<std::vector<CellOfMap>> map) const;
	Coordinate Normalize(Coordinate& currentCoordinate, const std::vector<std::vector<CellOfMap>> map);
};

#endif