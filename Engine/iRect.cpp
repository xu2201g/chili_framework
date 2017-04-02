#include "iRect.h"

#include <assert.h>

iRect::iRect(iVec2& pos_top_left, const int width, const int height)
	:
	m_position_tl(pos_top_left),
	m_dimensions(iVec2(width, height)),
	m_position_br(iVec2(pos_top_left.m_x + width - 1, pos_top_left.m_y + height - 1))
{
	assert(m_position_tl.m_x <= m_position_br.m_x &&
	       m_position_tl.m_y <= m_position_br.m_y);

	assert(m_dimensions.m_x > 0 && 
		   m_dimensions.m_y > 0);
}

iRect::iRect(iVec2& pos_top_left, iVec2& pos_bottom_right)
	:
	m_position_tl(pos_top_left),
	m_position_br(pos_bottom_right),
	m_dimensions(iVec2(pos_bottom_right.m_x - pos_top_left.m_x + 1, pos_bottom_right.m_y - pos_top_left.m_y + 1))
{
	assert(m_position_tl.m_x <= m_position_br.m_x &&
		   m_position_tl.m_y <= m_position_br.m_y);

	assert(m_dimensions.m_x > 0 &&
		   m_dimensions.m_y > 0);
}

bool iRect::isPointWithin(iVec2 & point)
{
	if (point.m_x >= m_position_tl.m_x && point.m_x <= m_position_br.m_x && /*horizontal*/
		point.m_y >= m_position_tl.m_y && point.m_y <= m_position_br.m_y)   /*vertical  */
	{
		return true;
	}
	else
	{
		return false;
	}
}
