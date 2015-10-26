#include "Map.h"

Map::Map(int height, int width){
	this->_map = std::vector<std::vector<CellOfMap>>(height, std::vector<CellOfMap>(width));
}
Map::Map(std::istream & input){
	//???????????????????????????????????????????????????????????????????????????????????????
	for (int i = 0; i < this->GetHeight(); i++)
		for (int j = 0; j < this->GetWidth(); j++){
			bool cell;
			std::cin >> cell;
			switch (cell){
			case 0: 
				this->_map[i][j] = empty;
				break;
			case 1:
				this->_map[i][j] = wall;
				break;
			}
		}
}

bool Map::IsEmpty(const Coordinate& coordinate) const{
	return coordinate.IsNull();
}

std::vector<std::vector<CellOfMap>> Map::GetMap() const{
	return this->_map;
}

int Map::GetHeight() const{
	return this->_map.size();
}
int Map::GetWidth() const{
	//???
}