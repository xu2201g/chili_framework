#pragma once
#include "Graphics.h"
#include "iRect.h"
#include "Editor.h"
//#include "Module.h"
#include "MenuBar.h"
#include "ToolBar.h"


class Render
{
	//friend class MenuBar;

public:

	Render(Graphics& gfx);

	void DrawPoint(iVec2& point, Color c);
	void DrawRect(iRect& rect, Color c, iVec2 offset);
	void DrawRect(iRect& rect, Color c);
	//void DrawModule(const Module& module);
	void DrawEditor(Editor& editor);
	void DrawCell(Cell& cell, iVec2 offset);
	void DrawMap(Map& map);
	void DrawMenuBar(MenuBar& menu);
	void DrawToolBar(ToolBar& tool);

	void DrawPlayer(Player& player);

private:

	Color m_color_default;
	Graphics& m_gfx;

	
};