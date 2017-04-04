#include "Map.h"

#include "Makros.h"

Map::Map(const std::string name, iVec2 dim)
	:
	m_name(name),
	m_dimensions(dim)
{
	Init();
}

Map::Map(const std::string name, iVec2 dim, Color color)
	:
	Map(name, dim)
{
	Init(color);
}

void Map::Init(void)
{
	Init(CELL_COLOR_DEFAULT);
}

void Map::Init(Color color)
{
	m_cell_matrix.resize(m_dimensions.getX(), std::vector<Cell>(int(m_dimensions.getY())));
	
	for (int x = 0; x < m_dimensions.getX(); ++x)
	{
		for (int y = 0; y < m_dimensions.getY(); ++y)
		{
			Cell cell(iVec2(x, y), iVec2(CELL_DIM_X, CELL_DIM_Y), color);
			m_cell_matrix[x][y] = cell;
		}
	}
}
