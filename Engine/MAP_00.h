#pragma once
#include "Map.h"

int dim = 15;

Cell GRAS( dim, Colors::Green);



Cell WAY(dim, Colors::Gray);
Cell SEA(dim, Colors::Blue);

Map map_00(10, 10, dim);

void test()
{
	map_00.RegisterCell(0, 0, GRAS);
	map_00.RegisterCell(1, 0, GRAS);
	map_00.RegisterCell(2, 0, GRAS);
	map_00.RegisterCell(3, 0, GRAS);
	map_00.RegisterCell(4, 0, GRAS);
	map_00.RegisterCell(5, 0, GRAS);
	map_00.RegisterCell(6, 0, GRAS);
	map_00.RegisterCell(7, 0, GRAS);
	map_00.RegisterCell(8, 0, GRAS);
	map_00.RegisterCell(9, 0, GRAS);

	map_00.RegisterCell(0, 1, GRAS);
	map_00.RegisterCell(1, 1, GRAS);
	map_00.RegisterCell(2, 1, GRAS);
	map_00.RegisterCell(3, 1, GRAS);
	map_00.RegisterCell(4, 1, GRAS);
	map_00.RegisterCell(5, 1, GRAS);
	map_00.RegisterCell(6, 1, GRAS);
	map_00.RegisterCell(7, 1, GRAS);
	map_00.RegisterCell(8, 1, GRAS);
	map_00.RegisterCell(9, 1, GRAS);

	map_00.RegisterCell(0, 2, GRAS);
	map_00.RegisterCell(1, 2, GRAS);
	map_00.RegisterCell(2, 2, GRAS);
	map_00.RegisterCell(3, 2, GRAS);
	map_00.RegisterCell(4, 2, SEA);
	map_00.RegisterCell(5, 2, SEA);
	map_00.RegisterCell(6, 2, GRAS);
	map_00.RegisterCell(7, 2, GRAS);
	map_00.RegisterCell(8, 2, GRAS);
	map_00.RegisterCell(9, 2, GRAS);

	map_00.RegisterCell(0, 3, GRAS);
	map_00.RegisterCell(1, 3, SEA);
	map_00.RegisterCell(2, 3, SEA);
	map_00.RegisterCell(3, 3, SEA);
	map_00.RegisterCell(4, 3, SEA);
	map_00.RegisterCell(5, 3, SEA);
	map_00.RegisterCell(6, 3, SEA);
	map_00.RegisterCell(7, 3, GRAS);
	map_00.RegisterCell(8, 3, GRAS);
	map_00.RegisterCell(9, 3, GRAS);

	map_00.RegisterCell(0, 4, GRAS);
	map_00.RegisterCell(1, 4, GRAS);
	map_00.RegisterCell(2, 4, SEA);
	map_00.RegisterCell(3, 4, SEA);
	map_00.RegisterCell(4, 4, SEA);
	map_00.RegisterCell(5, 4, GRAS);
	map_00.RegisterCell(6, 4, GRAS);
	map_00.RegisterCell(7, 4, GRAS);
	map_00.RegisterCell(8, 4, GRAS);
	map_00.RegisterCell(9, 4, GRAS);

	map_00.RegisterCell(0, 5, GRAS);
	map_00.RegisterCell(1, 5, GRAS);
	map_00.RegisterCell(2, 5, GRAS);
	map_00.RegisterCell(3, 5, GRAS);
	map_00.RegisterCell(4, 5, GRAS);
	map_00.RegisterCell(5, 5, GRAS);
	map_00.RegisterCell(6, 5, GRAS);
	map_00.RegisterCell(7, 5, GRAS);
	map_00.RegisterCell(8, 5, GRAS);
	map_00.RegisterCell(9, 5, GRAS);

	map_00.RegisterCell(0, 6, GRAS);
	map_00.RegisterCell(1, 6, GRAS);
	map_00.RegisterCell(2, 6, GRAS);
	map_00.RegisterCell(3, 6, GRAS);
	map_00.RegisterCell(4, 6, GRAS);
	map_00.RegisterCell(5, 6, GRAS);
	map_00.RegisterCell(6, 6, GRAS);
	map_00.RegisterCell(7, 6, GRAS);
	map_00.RegisterCell(8, 6, GRAS);
	map_00.RegisterCell(9, 6, GRAS);

	map_00.RegisterCell(0, 7, WAY);
	map_00.RegisterCell(1, 7, WAY);
	map_00.RegisterCell(2, 7, WAY);
	map_00.RegisterCell(3, 7, WAY);
	map_00.RegisterCell(4, 7, WAY);
	map_00.RegisterCell(5, 7, WAY);
	map_00.RegisterCell(6, 7, WAY);
	map_00.RegisterCell(7, 7, WAY);
	map_00.RegisterCell(8, 7, WAY);
	map_00.RegisterCell(9, 7, WAY);

	map_00.RegisterCell(0, 8, GRAS);
	map_00.RegisterCell(1, 8, GRAS);
	map_00.RegisterCell(2, 8, GRAS);
	map_00.RegisterCell(3, 8, GRAS);
	map_00.RegisterCell(4, 8, GRAS);
	map_00.RegisterCell(5, 8, GRAS);
	map_00.RegisterCell(6, 8, GRAS);
	map_00.RegisterCell(7, 8, GRAS);
	map_00.RegisterCell(8, 8, GRAS);
	map_00.RegisterCell(9, 8, GRAS);

	map_00.RegisterCell(0, 9, GRAS);
	map_00.RegisterCell(1, 9, GRAS);
	map_00.RegisterCell(2, 9, GRAS);
	map_00.RegisterCell(3, 9, GRAS);
	map_00.RegisterCell(4, 9, GRAS);
	map_00.RegisterCell(5, 9, GRAS);
	map_00.RegisterCell(6, 9, GRAS);
	map_00.RegisterCell(7, 9, GRAS);
	map_00.RegisterCell(8, 9, GRAS);
	map_00.RegisterCell(9, 9, GRAS);
	
}