#pragma once
#include "Graphics.h"
#include "iRect.h"
#include "Module.h"

class Render
{
public:

	Render(Graphics& gfx);

	void DrawPoint(const iVec2& point, Color c);
	void DrawRect(const iRect& rect, Color c);
	void DrawModule(const Module& module);

	Color m_color_default;
	Graphics& m_gfx;

	
};