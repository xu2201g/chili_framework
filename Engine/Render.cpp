#include "Render.h"
#include <assert.h>

Render::Render(Graphics& gfx)
	:
	m_gfx(gfx),
	m_color_default(Colors::Magenta)
{	
}

void Render::DrawPoint(const iVec2& point, Color c)
{
	m_gfx.PutPixel(point.m_x, point.m_y, c);
}

void Render::DrawRect(const iRect& rect, Color c)
{
	for (int x = 0; x < rect.m_dimensions.m_x; ++x)
	{
		for (int y = 0; y < rect.m_dimensions.m_y; ++y)
		{
			m_gfx.PutPixel(x + rect.m_position_tl.m_x,y + rect.m_position_tl.m_y, c);
		}
	}
}

void Render::DrawModule(const Module& module) 
{
	DrawRect(module.m_rectangle, module.m_color_back);
}

void Render::DrawEditor(Editor& editor)
{
	DrawMap(editor.m_map);
}

void Render::DrawCell(Cell& cell, iVec2 tl)
{
	for (int x = 0 + CELL_PADDING; x < cell.m_dimensions.m_x - CELL_PADDING; ++x)
	{
		for (int y = 0 + CELL_PADDING; y < cell.m_dimensions.m_y - CELL_PADDING; ++y)
		{
			m_gfx.PutPixel(x + tl.m_x + cell.m_position.m_x * cell.m_dimensions.m_x, 
				           y + tl.m_y + cell.m_position.m_y * cell.m_dimensions.m_y, cell.m_color);
		}
	}
	
}

void Render::DrawMap(Map& map)
{
	DrawRect(map.m_rect, MAP_COLOR);

	for (int x = 0; x < map.m_dimensions.m_x; ++x)
	{
		for (int y = 0; y < map.m_dimensions.m_y; ++y)
		{
			DrawCell(map.m_cell_matrix[x][y], map.m_rect.m_position_tl);
		}
	}	
}
