#include "Cell.h"
#include <assert.h>


Cell::Cell(const int dim, const Color c)
	:
	m_dimension(dim),
	m_color(c),
	m_registered(false)
{
}

void Cell::Draw(const int x_off, const int y_off, Graphics& gfx)
{
	assert(2 * m_padding < m_dimension && 2 * m_padding < m_dimension);

	for (int x = 0 + m_padding; x < m_dimension - m_padding; ++x)
	{
		for (int y = 0 + m_padding; y < m_dimension - m_padding; ++y)
		{
			gfx.PutPixel(x + m_map_pos.x*m_dimension + x_off, y + m_map_pos.y*m_dimension + y_off, m_color);
		}
	}	
}
