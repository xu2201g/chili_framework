#pragma once

#include "Colors.h"
#include "Graphics.h"

class Cell
{
public:

	Cell(void) = default;
	Cell(const int x_pos, const int y_pos, const int width, const int height, const Color c);

	void Draw(Graphics& gfx);

public:

	//coordinates in map or grid coordinates
	int m_x_map_pos;
	int m_y_map_pos;

	int m_width;
	int m_height;

	Color m_color;
	int m_padding = 7;
	
	
	int m_value;
};