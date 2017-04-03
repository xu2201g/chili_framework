#include "Render.h"

#include <assert.h>

Render::Render(Graphics& gfx)
	:
	m_gfx(gfx),
	m_color_default(Colors::Magenta)
{	
}

void Render::DrawPoint(iVec2& point, Color c)
{
	m_gfx.PutPixel(point.getX(), point.getY(), c);
}

void Render::DrawRect(iRect& rect, Color c)
{
	for (int x = 0; x < rect.getDimensions().getX(); ++x)
	{
		for (int y = 0; y < rect.getDimensions().getY(); ++y)
		{
			m_gfx.PutPixel(x + rect.getTopLeft().getX(),y + rect.getTopLeft().getY(), c);
		}
	}
}

//void Render::DrawModule(const Module& module) 
//{
//	DrawRect(module.getRect()angle, module.m_color_back);
//}

void Render::DrawEditor(Editor& editor)
{
	DrawMap(editor.getMap());
	DrawMenuBar(editor.getMenu());
	DrawToolBar(editor.getToolbar());
}

void Render::DrawCell(Cell& cell, iVec2 tl)
{
	for (int x = 0 + CELL_PADDING; x < cell.getDimensions().getX() - CELL_PADDING; ++x)
	{
		for (int y = 0 + CELL_PADDING; y < cell.getDimensions().getY() - CELL_PADDING; ++y)
		{
			m_gfx.PutPixel(x + tl.getX() + cell.getPosition().getX() * cell.getDimensions().getX(),
				           y + tl.getY() + cell.getPosition().getY() * cell.getDimensions().getY(), cell.getColor());
		}
	}
}

void Render::DrawMap(Map& map)
{
	DrawRect(map.getRect(), MAP_COLOR);

	for (int x = 0; x < map.getDim().getX(); ++x)
	{
		for (int y = 0; y < map.getDim().getY(); ++y)
		{
			DrawCell(map.getCellMatrix()[x][y], map.getRect().getTopLeft());
		}
	}	
}

void Render::DrawMenuBar(MenuBar& menu)
{
	DrawRect(menu.getRect(), menu.getColor());

	DrawRect(menu.getNew().getRect(), menu.getNew().getColor());
	DrawRect(menu.getLoad().getRect(), menu.getLoad().getColor());
	DrawRect(menu.getSave().getRect(), menu.getSave().getColor());
	DrawRect(menu.getSimulate().getRect(), menu.getSimulate().getColor());
}

void Render::DrawToolBar(ToolBar& tool)
{
	DrawRect(tool.getRect(), tool.getColor());
}