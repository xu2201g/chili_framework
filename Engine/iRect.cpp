#include "iRect.h"
#include "Makros.h"
#include <assert.h>

iRect::iRect(iVec2& pos_top_left, const int width, const int height)
	:
	m_position_tl(pos_top_left),
	m_dimensions(iVec2(width, height)),
	m_position_br(iVec2(pos_top_left.getX() + width - 1, pos_top_left.getY() + height - 1))
{
	assert(m_position_tl.getX() <= m_position_br.getX() &&
	       m_position_tl.getY() <= m_position_br.getY());

	assert(m_dimensions.getX() > 0 && 
		   m_dimensions.getY() > 0);
}

iRect::iRect(iVec2& pos_top_left, iVec2& pos_bottom_right)
	:
	m_position_tl(pos_top_left),
	m_position_br(pos_bottom_right),
	m_dimensions(iVec2(pos_bottom_right.getX() - pos_top_left.getX() + 1, pos_bottom_right.getY() - pos_top_left.getY() + 1))
{
	assert(m_position_tl.getX() <= m_position_br.getX() &&
		   m_position_tl.getY() <= m_position_br.getY());

	assert(m_dimensions.getX() > 0 &&
		   m_dimensions.getY() > 0);
}

bool iRect::isPointWithin(iVec2 & point)
{
	if (point.getX() >= m_position_tl.getX() && point.getX() <= m_position_br.getX() && /*horizontal*/
		point.getY() >= m_position_tl.getY() && point.getY() <= m_position_br.getY())   /*vertical  */
	{
		return true;
	}
	else
	{
		return false;
	}
}

