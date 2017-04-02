#include "Cell.h"
#include <assert.h>


Cell::Cell(const int x_pos, const int y_pos, const int width, const int height, const Color c)
	:
	m_x_map_pos(x_pos),
	m_y_map_pos(y_pos),
	m_width(width),
	m_height(height),
	m_color(c)
{
}

void Cell::Draw(Graphics& gfx)
{
	assert(2 * m_padding < m_width && 2 * m_padding < m_height);

	for (int x = 0 + m_padding; x < m_width - m_padding; ++x)
	{
		for (int y = 0 + m_padding; y < m_height - m_padding; ++y)
		{
			gfx.PutPixel(x + m_x_map_pos*m_width, y + m_y_map_pos*m_height, m_color);
		}
	}	
}
