#include "Map.h"

Map::Map(const int x_dim, const int y_dim, const int cell_dim)
{
	
	m_cell_matrix.resize(x_dim, std::vector<Cell>(y_dim));

	for (int x = 0; x < x_dim; ++x)
	{
		for (int y = 0; y < y_dim; ++y)
		{
			Cell cell(x, y, cell_dim, cell_dim, Colors::Cyan);
			m_cell_matrix[x][y] = cell;
		}
	}
}

void Map::Draw(Graphics& gfx)
{
	for (int x = 0; x < m_cell_x_dimension; ++x)
	{
		for (int y = 0; y < m_cell_y_dimension; ++y)
		{
			m_cell_matrix[x][y].m_x_map_pos;
			m_cell_matrix[x][y].m_y_map_pos;
			m_cell_matrix[x][y].Draw(gfx);
		}
	}
}

