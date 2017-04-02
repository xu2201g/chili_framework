#pragma once
#include <vector>
#include "Graphics.h"
#include "Cell.h"
class Map
{

public:

	Map(const int x_dim, const int y_dim, const int value);

	void Draw(Graphics& gfx);

private:

	int m_cell_x_dimension = 10;
	int m_cell_y_dimension = 10;

	std::vector<std::vector<Cell>> m_cell_matrix;

};

