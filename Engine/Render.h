#pragma once
#include "Graphics.h"
#include "iRect.h"

class Render
{
public:
	Render(Graphics& gfx);

	void DrawPoint(iVec2& point, Color c);


	void DrawRect(iRect& rect, Color c);


	Color m_color_default;
	Graphics& m_gfx;

	
};