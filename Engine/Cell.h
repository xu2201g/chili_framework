#pragma once

#include "iVec2.h"
#include "Colors.h"

class Cell
{

public:

	Cell(void) = default;
	Cell(const iVec2 pos, const iVec2 dim, Color c);




	iVec2 m_position;
	iVec2 m_dimensions;

	Color m_color;
};