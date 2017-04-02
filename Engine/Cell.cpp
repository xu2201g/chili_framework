#include "Cell.h"
#include <assert.h>


Cell::Cell(const int dim, const Color c)
	:
	m_dimension(dim),
	m_color(c),
	m_registered(false)
{
}

void Cell::Draw(Graphics& gfx)
{
	assert(2 * m_padding < m_dimension && 2 * m_padding < m_dimension);

	for (int x = 0 + m_padding; x < m_dimension - m_padding; ++x)
	{
		for (int y = 0 + m_padding; y < m_dimension - m_padding; ++y)
		{
			gfx.PutPixel(x + m_x_map_pos*m_dimension, y + m_y_map_pos*m_dimension, m_color);
		}
	}	
}
