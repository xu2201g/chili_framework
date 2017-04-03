#pragma once

#include "iVec2.h"

class iRect
{

public:
	
	iRect(iVec2& pos_top_left, const int width, const int height);
	iRect(iVec2& pos_top_left, iVec2& pos_bottom_right);
	
	bool isPointWithin(iVec2& point);

	void UpdateOnDrag(iVec2 move);
	bool CheckLimits(iVec2 move);
	void Update(void);

	iVec2 m_position_tl; //top left 
	iVec2 m_position_br; //width and height and the bottom right as well

	iVec2 m_old_position_tl;
	iVec2 m_old_position_br;

	iVec2 m_dimensions;
};