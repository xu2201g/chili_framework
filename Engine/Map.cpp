#include "Map.h"

#include "Makros.h"




Map::Map(const std::string name, iRect rect, iVec2 dim)
	:
	m_name(name),
	m_dimensions(dim),
	m_rect(rect)
{
}

void Map::Init(void)
{
	m_cell_matrix.resize(m_dimensions.m_x, std::vector<Cell>(int(m_dimensions.m_y)));
	
	for (int x = 0; x < m_dimensions.m_x; ++x)
	{
		for (int y = 0; y < m_dimensions.m_y; ++y)
		{
			Cell cell(iVec2(x, y), iVec2(CELL_DIM_X, CELL_DIM_Y), CELL_COLOR_DEFAULT);
			m_cell_matrix[x][y] = cell;
		}
	}
}
