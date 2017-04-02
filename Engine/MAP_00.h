#pragma once
#include "Map.h"

int dim = 15;

Cell GRAS( dim, Colors::Green);

Cell WAY(dim, Colors::Gray);
Cell SEA(dim, Colors::Blue);

Map map_00(Vec2(0, 0), Vec2(10, 10), dim);

void test()
{
	map_00.RegisterCell(Vec2(0, 0), GRAS);
	map_00.RegisterCell(Vec2(1, 0), GRAS);
	map_00.RegisterCell(Vec2(2, 0), GRAS);
	map_00.RegisterCell(Vec2(3, 0), GRAS);
	map_00.RegisterCell(Vec2(4, 0), GRAS);
	map_00.RegisterCell(Vec2(5, 0), GRAS);
	map_00.RegisterCell(Vec2(6, 0), GRAS);
	map_00.RegisterCell(Vec2(7, 0), GRAS);
	map_00.RegisterCell(Vec2(8, 0), GRAS);
	map_00.RegisterCell(Vec2(9, 0), GRAS);
								
	map_00.RegisterCell(Vec2(0, 1), GRAS);
	map_00.RegisterCell(Vec2(1, 1), GRAS);
	map_00.RegisterCell(Vec2(2, 1), GRAS);
	map_00.RegisterCell(Vec2(3, 1), GRAS);
	map_00.RegisterCell(Vec2(4, 1), GRAS);
	map_00.RegisterCell(Vec2(5, 1), GRAS);
	map_00.RegisterCell(Vec2(6, 1), GRAS);
	map_00.RegisterCell(Vec2(7, 1), GRAS);
	map_00.RegisterCell(Vec2(8, 1), GRAS);
	map_00.RegisterCell(Vec2(9, 1), GRAS);
						
	map_00.RegisterCell(Vec2(0, 2), GRAS);
	map_00.RegisterCell(Vec2(1, 2), GRAS);
	map_00.RegisterCell(Vec2(2, 2), GRAS);
	map_00.RegisterCell(Vec2(3, 2), GRAS);
	map_00.RegisterCell(Vec2(4, 2), SEA);
	map_00.RegisterCell(Vec2(5, 2), SEA);
	map_00.RegisterCell(Vec2(6, 2), GRAS);
	map_00.RegisterCell(Vec2(7, 2), GRAS);
	map_00.RegisterCell(Vec2(8, 2), GRAS);
	map_00.RegisterCell(Vec2(9, 2), GRAS);
						
	map_00.RegisterCell(Vec2(0, 3), GRAS);
	map_00.RegisterCell(Vec2(1, 3), SEA);
	map_00.RegisterCell(Vec2(2, 3), SEA);
	map_00.RegisterCell(Vec2(3, 3), SEA);
	map_00.RegisterCell(Vec2(4, 3), SEA);
	map_00.RegisterCell(Vec2(5, 3), SEA);
	map_00.RegisterCell(Vec2(6, 3), SEA);
	map_00.RegisterCell(Vec2(7, 3), GRAS);
	map_00.RegisterCell(Vec2(8, 3), GRAS);
	map_00.RegisterCell(Vec2(9, 3), GRAS);
					
	map_00.RegisterCell(Vec2(0, 4), GRAS);
	map_00.RegisterCell(Vec2(1, 4), GRAS);
	map_00.RegisterCell(Vec2(2, 4), SEA);
	map_00.RegisterCell(Vec2(3, 4), SEA);
	map_00.RegisterCell(Vec2(4, 4), SEA);
	map_00.RegisterCell(Vec2(5, 4), GRAS);
	map_00.RegisterCell(Vec2(6, 4), GRAS);
	map_00.RegisterCell(Vec2(7, 4), GRAS);
	map_00.RegisterCell(Vec2(8, 4), GRAS);
	map_00.RegisterCell(Vec2(9, 4), GRAS);
						
	map_00.RegisterCell(Vec2(0, 5), GRAS);
	map_00.RegisterCell(Vec2(1, 5), GRAS);
	map_00.RegisterCell(Vec2(2, 5), GRAS);
	map_00.RegisterCell(Vec2(3, 5), GRAS);
	map_00.RegisterCell(Vec2(4, 5), GRAS);
	map_00.RegisterCell(Vec2(5, 5), GRAS);
	map_00.RegisterCell(Vec2(6, 5), GRAS);
	map_00.RegisterCell(Vec2(7, 5), GRAS);
	map_00.RegisterCell(Vec2(8, 5), GRAS);
	map_00.RegisterCell(Vec2(9, 5), GRAS);
						
	map_00.RegisterCell(Vec2(0, 6), GRAS);
	map_00.RegisterCell(Vec2(1, 6), GRAS);
	map_00.RegisterCell(Vec2(2, 6), GRAS);
	map_00.RegisterCell(Vec2(3, 6), GRAS);
	map_00.RegisterCell(Vec2(4, 6), GRAS);
	map_00.RegisterCell(Vec2(5, 6), GRAS);
	map_00.RegisterCell(Vec2(6, 6), GRAS);
	map_00.RegisterCell(Vec2(7, 6), GRAS);
	map_00.RegisterCell(Vec2(8, 6), GRAS);
	map_00.RegisterCell(Vec2(9, 6), GRAS);
					
	map_00.RegisterCell(Vec2(0, 7), WAY);
	map_00.RegisterCell(Vec2(1, 7), WAY);
	map_00.RegisterCell(Vec2(2, 7), WAY);
	map_00.RegisterCell(Vec2(3, 7), WAY);
	map_00.RegisterCell(Vec2(4, 7), WAY);
	map_00.RegisterCell(Vec2(5, 7), WAY);
	map_00.RegisterCell(Vec2(6, 7), WAY);
	map_00.RegisterCell(Vec2(7, 7), WAY);
	map_00.RegisterCell(Vec2(8, 7), WAY);
	map_00.RegisterCell(Vec2(9, 7), WAY);
						
	map_00.RegisterCell(Vec2(0, 8), GRAS);
	map_00.RegisterCell(Vec2(1, 8), GRAS);
	map_00.RegisterCell(Vec2(2, 8), GRAS);
	map_00.RegisterCell(Vec2(3, 8), GRAS);
	map_00.RegisterCell(Vec2(4, 8), GRAS);
	map_00.RegisterCell(Vec2(5, 8), GRAS);
	map_00.RegisterCell(Vec2(6, 8), GRAS);
	map_00.RegisterCell(Vec2(7, 8), GRAS);
	map_00.RegisterCell(Vec2(8, 8), GRAS);
	map_00.RegisterCell(Vec2(9, 8), GRAS);
								 
	map_00.RegisterCell(Vec2(0, 9), GRAS);
	map_00.RegisterCell(Vec2(1, 9), GRAS);
	map_00.RegisterCell(Vec2(2, 9), GRAS);
	map_00.RegisterCell(Vec2(3, 9), GRAS);
	map_00.RegisterCell(Vec2(4, 9), GRAS);
	map_00.RegisterCell(Vec2(5, 9), GRAS);
	map_00.RegisterCell(Vec2(6, 9), GRAS);
	map_00.RegisterCell(Vec2(7, 9), GRAS);
	map_00.RegisterCell(Vec2(8, 9), GRAS);
	map_00.RegisterCell(Vec2(9, 9), GRAS);
	
}