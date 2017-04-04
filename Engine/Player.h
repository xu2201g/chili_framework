#pragma once

#include "Map.h"
#include "Cell.h"

class Player
{
public:
	
	Player(Cell& cell, Map& map);

	void move(iVec2 direction);

	Map& getMap(void) { return m_map; }
	Cell& getCell(void) { return m_cell; }

private:

	Map& m_map;
	Cell& m_cell;

};