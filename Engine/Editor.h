#pragma once
#include "Makros.h"
#include "Map.h"
#include "Graphics.h"

class Editor
{

public:
	
	Editor(Vec2 dim, const int cell);
	void Init(const int mode);
	//void SelectCell(Mouse& mouse, Cell& cell);

	void Draw(Graphics& gfx);


public:

	//Cell m_selected_cell;
	
	Map m_color_map;
	Map m_logic_map;
};