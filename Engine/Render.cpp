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
