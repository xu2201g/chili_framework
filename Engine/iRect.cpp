#include "iRect.h"
#include "Makros.h"
#include <assert.h>

iRect::iRect(iVec2& pos_top_left, const int width, const int height)
	:
	m_position_tl(pos_top_left),
	m_dimensions(iVec2(width, height)),
	m_position_br(iVec2(pos_top_left.m_x + width - 1, pos_top_left.m_y + height - 1)),
	m_old_position_tl(m_position_tl),
	m_old_position_br(m_position_br)
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
	m_old_position_tl(m_position_tl),
	m_old_position_br(m_position_br),
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

void iRect::UpdateOnDrag(iVec2 move)
{
	iVec2 new_position_tl(m_old_position_tl + move);
	iVec2 new_position_br(m_old_position_br + move);

	if (new_position_tl.m_x < 0) new_position_tl.m_x = 0;
	if (new_position_tl.m_y < 0) new_position_tl.m_y = 0;
	
	if (new_position_tl.m_x >= SCREEN_WIDTH)  new_position_tl.m_x = SCREEN_WIDTH -1;
	if (new_position_tl.m_y >= SCREEN_HEIGHT) new_position_tl.m_y = SCREEN_HEIGHT -1;

	if (new_position_br.m_x < 0) new_position_br.m_x = 0;
	if (new_position_br.m_y < 0) new_position_br.m_y = 0;

	
	if (new_position_br.m_x >= SCREEN_WIDTH)
	{
		new_position_br.m_x = SCREEN_WIDTH - 1;
		new_position_tl.m_x = SCREEN_WIDTH - m_dimensions.m_x;
	}
	
	if (new_position_br.m_y >= SCREEN_HEIGHT)
	{
		new_position_br.m_y = SCREEN_HEIGHT - 1;
		new_position_tl.m_y = SCREEN_HEIGHT - m_dimensions.m_y;
	}

	m_position_tl = new_position_tl;
	m_position_br = new_position_br;

}


void iRect::Update(void)
{
	m_old_position_tl = m_position_tl;
	m_old_position_br = m_position_br;
}
