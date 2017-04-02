#include "Map.h"
#include "Makros.h"
#include <assert.h>
#include <random>
#include <iostream>
#include <math.h>

Map::Map(Vec2 pos, Vec2 dim, const int cell_dim)
	:
	m_position(pos),
	m_cells_dimensions(dim),
	m_cell_dimension(cell_dim),
	m_selected_cell(cell_dim, Colors::Black)
{
}

void Map::Init(const int mode)
{
	assert(m_cell_dimension*m_cells_dimensions.x <= Graphics::ScreenWidth && m_cell_dimension*m_cells_dimensions.y <= Graphics::ScreenHeight);

	//random seed
	std::random_device rd;
	std::mt19937 rng(rd());
	//distribution
	std::uniform_int_distribution<int> cDist(0, 255);

	//initializing map size
	m_cell_matrix.resize(int(m_cells_dimensions.x), std::vector<Cell>(int(m_cells_dimensions.y)));
	Color c;
	//initializing map cell colors

	

	for (int x = 0; x < m_cells_dimensions.x; ++x)
	{
		for (int y = 0; y < m_cells_dimensions.y; ++y)
		{
			switch (mode)
			{
			case 0: c = Color(cDist(rng), cDist(rng), cDist(rng)); break;
			case 1: c = Colors::Gray; break;
			case 2: c = Color();


				break;
			}
			
			Cell cell(m_cell_dimension, c);
			RegisterCell(Vec2(float(x), float(y)), cell);
		}
	}
}

void Map::RegisterCell(Vec2 pos, Cell cell)
{
	//already a cell registered to related coordinates
	if (m_cell_matrix[int(pos.x)][int(pos.y)].m_registered == UNREGISTERED)
	{
		cell.m_map_pos = pos;
		m_cell_matrix[int(pos.x)][int(pos.y)] = cell;
		m_cell_matrix[int(pos.x)][int(pos.y)].m_registered = REGISTERED;
	}
	else
	{
		//Log Error
		system("pause");
	}
}

bool Map::MouseToCell(Mouse& mouse, Cell& cell)
{
	if ( IsWithinMap( Vec2( float(mouse.GetPosX()), float(mouse.GetPosY()) ) ) )
	{
		//convert screen into map coordinates
		Vec2 map_coordinates(mouse.GetPosX() - m_position.x, mouse.GetPosY() - m_position.y);
		
		//calculate map cell
		Vec2 cell_coordinates(float(int(map_coordinates.x) / int(m_cell_dimension)), float(int(map_coordinates.y) / int(m_cell_dimension)));
		
		//m_cell_matrix[int(cell_coordinates.x)][int(cell_coordinates.y)].m_color = Colors::White;
		
		CopyCell(m_cell_matrix[int(cell_coordinates.x)][int(cell_coordinates.y)], m_selected_cell);
		//cell->m_color = Colors::Green;
		return true;
	}
	else
	{
		return false;
	}

}

bool Map::IsWithinMap(Vec2 pos)
{
	if (pos.x >= m_position.x && pos.x <= m_position.x + m_cells_dimensions.x*m_cell_dimension &&
		pos.y >= m_position.y && pos.y <= m_position.y + m_cells_dimensions.y*m_cell_dimension)
	{
		return true;
	}
	else
	{
		return false;
	}
}



void Map::UpdateCellColor(Mouse& mouse, Color color)
{
	
	if(MouseToCell(mouse, m_selected_cell))
	{
		m_selected_cell.m_color = color;
	}
	
}

void Map::Draw(Vec2 offset, Graphics& gfx)
{
	for (int x = 0; x < m_cells_dimensions.x; ++x)
	{
		for (int y = 0; y < m_cells_dimensions.y; ++y)
		{
			m_cell_matrix[x][y].Draw(offset.x, offset.y, gfx);
		}
	}
}

