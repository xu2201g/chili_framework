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

void Render::DrawRect(iRect& rect, Color c, iVec2 offset)
{
	for (int x = 0; x < rect.getDimensions().getX(); ++x)
	{
		for (int y = 0; y < rect.getDimensions().getY(); ++y)
		{
			m_gfx.PutPixel(x + offset.getX() + rect.getTopLeft().getX(),
				           y + offset.getY() + rect.getTopLeft().getY(), c);
		}
	}
}

void Render::DrawRect(iRect& rect, Color c)
{
	DrawRect(rect, c, iVec2(0, 0));
}

void Render::DrawEditor(Editor& editor)
{
	DrawMap(editor.getMap());
	DrawMenuBar(editor.getMenu());
	DrawToolBar(editor.getToolbar());
}

void Render::DrawCell(Cell& cell, iVec2 offset)
{
	for (int x = 0 + CELL_PADDING; x < cell.getDimensions().getX() - CELL_PADDING; ++x)
	{
		for (int y = 0 + CELL_PADDING; y < cell.getDimensions().getY() - CELL_PADDING; ++y)
		{
			m_gfx.PutPixel(x + 2 + cell.getPosition().getX() * cell.getDimensions().getX() + offset.getX(),
				           y + 2 + cell.getPosition().getY() * cell.getDimensions().getY() + offset.getY(), cell.getColor());
		}
	}
}

void Render::DrawMap(Map& map)
{
	iVec2 offset = TOPLEFT_MAP;

	for (int x = 0; x < map.getDim().getX(); ++x)
	{
		for (int y = 0; y < map.getDim().getY(); ++y)
		{
			DrawCell(map.getCellMatrix()[x][y], offset);
		}
	}	
}

void Render::DrawMenuBar(MenuBar& menu)
{
	iVec2 offset = menu.getRect().getTopLeft();


	DrawRect(menu.getRect(), menu.getColor());

	DrawRect(menu.getNew().getRect(), menu.getNew().getColor(), offset);
	DrawRect(menu.getLoad().getRect(), menu.getLoad().getColor(), offset);
	DrawRect(menu.getSave().getRect(), menu.getSave().getColor(), offset);
	DrawRect(menu.getSimulate().getRect(), menu.getSimulate().getColor(), offset);
}

void Render::DrawToolBar(ToolBar& tool)
{
	DrawRect(tool.getRect(), tool.getColor());
}