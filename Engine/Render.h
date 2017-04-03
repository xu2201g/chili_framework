#pragma once
#include "Graphics.h"
#include "iRect.h"
#include "Editor.h"
#include "Module.h"


class Render
{
public:

	Render(Graphics& gfx);

	void DrawPoint(const iVec2& point, Color c);
	void DrawRect(const iRect& rect, Color c);
	void DrawModule(const Module& module);
	void DrawEditor(Editor& editor);
	void DrawCell(Cell& cell, iVec2 tl);
	void DrawMap(Map& map);

	Color m_color_default;
	Graphics& m_gfx;

	
};