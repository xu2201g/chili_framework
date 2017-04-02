#pragma once
#include <vector>
#include "Graphics.h"
#include "Cell.h"

#define   REGISTERED 1
#define UNREGISTERED 0

class Map
{

public:

	Map(const int x_dim, const int y_dim, const int cell_dim);

	void RegisterCell(const int x, const int y, Cell cell);

	void Draw(Graphics& gfx);

private:

	int m_x_cells_dimension;
	int m_y_cells_dimension;
	int m_cell_dimension;

	std::vector<std::vector<Cell>> m_cell_matrix;

};

