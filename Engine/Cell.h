#pragma once

#include "Colors.h"
#include "Graphics.h"
#include "Makros.h"

class Cell
{
public:

	Cell(void) = default;
	Cell(const int dim, const Color c);

	void Draw(Graphics& gfx);

public:

	//coordinates in map or grid coordinates
	//layer 0 - geometry
	int m_x_map_pos;
	int m_y_map_pos;

	int m_dimension;

	//layer 1 - rendering
	Color m_color;
	int m_padding = CELL_PADDING;
	
	//layer 2 - logic
	int m_registered;
	int m_value;
};