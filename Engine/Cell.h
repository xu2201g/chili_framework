#pragma once

#include "iRect.h"
#include "iVec2.h"
#include "Colors.h"

class Cell
{

public:

	Cell(void) = default;
	Cell(iVec2 pos, iVec2 dim, Color c);

	Color& getColor(void) { return m_color; }

	iVec2& getPosition(void) { return m_pos; }
	iVec2& getDimensions(void) { return m_dimensions; }

	void setColor(Color color);
	void setCell(Cell& cell);

private:
	
	iVec2 m_pos;
	iVec2 m_dimensions;
	Color m_color;
};