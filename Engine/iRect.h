#pragma once

#include "iVec2.h"

class iRect
{

public:
	
	iRect(void) = default;
	iRect(iVec2& pos_top_left, const int width, const int height);
	iRect(iVec2& pos_top_left, iVec2& pos_bottom_right);
	
	bool isPointWithin(iVec2& point);

	iVec2& getTopLeft(void) { return m_position_tl; }
	iVec2& getBottomRight(void) { return m_position_br; }
	iVec2& getDimensions(void) { return m_dimensions; }

protected:

	iVec2 m_position_tl; //top left 
	iVec2 m_position_br; //width and height and the bottom right as well

	iVec2 m_dimensions;
};