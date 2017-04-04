#include "Cell.h"



Cell::Cell(iVec2 pos, iVec2 dim, Color c)
	:
	m_pos(pos),
	m_dimensions(dim),
	m_color(c)
{
}

void Cell::setColor(Color color)
{
	m_color = color;
}

void Cell::setCell(Cell & cell)
{
	m_color = cell.getColor();
}
