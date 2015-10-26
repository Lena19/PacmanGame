#pragma once
#ifndef NULLCOORDINATE_H
#define NULLCOORDINATE_H

#include "Coordinate.h"

class NullCoordinate : public Coordinate{

public:
	const bool IsNull();
};

#endif