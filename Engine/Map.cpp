#include "Map.h"
#include "Makros.h"
#include <assert.h>
#include <random>

Map::Map(const int x_dim, const int y_dim, const int cell_dim)
	:
	m_x_cells_dimension(x_dim),
	m_y_cells_dimension(y_dim),
	m_cell_dimension(cell_dim)
{
	assert(m_cell_dimension*m_x_cells_dimension <= Graphics::ScreenWidth && m_cell_dimension*m_y_cells_dimension <= Graphics::ScreenHeight);

	//random seed
	std::random_device rd;
	std::mt19937 rng( rd());
	//distribution
	std::uniform_int_distribution<int> cDist(0, 255);

	//initializing map size
	m_cell_matrix.resize(m_x_cells_dimension, std::vector<Cell>(m_y_cells_dimension));
	
	////initializing map cell colors
	//for (int x = 0; x < m_x_cells_dimension; ++x)
	//{
	//	for (int y = 0; y < m_y_cells_dimension; ++y)
	//	{
	//		Color c = Color(cDist(rng), cDist(rng), cDist(rng));
	//		Cell cell(m_cell_dimension, c);
	//		RegisterCell(x, y, cell);
	//	}
	//}
}

void Map::RegisterCell(const int x, const int y, Cell cell)
{
	//already a cell registered to related coordinates
	if (m_cell_matrix[x][y].m_registered == UNREGISTERED)
	{
		cell.m_x_map_pos = x;
		cell.m_y_map_pos = y;
		m_cell_matrix[x][y] = cell;
		m_cell_matrix[x][y].m_registered = REGISTERED;
	}
	else
	{
		//Log Error
		system("pause");
	}
}

void Map::Draw(Graphics& gfx)
{
	for (int x = 0; x < m_x_cells_dimension; ++x)
	{
		for (int y = 0; y < m_y_cells_dimension; ++y)
		{
			m_cell_matrix[x][y].Draw(gfx);
		}
	}
}

