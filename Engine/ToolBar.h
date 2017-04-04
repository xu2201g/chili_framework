#pragma once

#include "Module.h"
#include "iRect.h"
#include "Cell.h"
#include "Button.h"

class ToolBar : public Module
{

public:
	ToolBar(std::string name, iRect& rect, Color color);

	Button& getCopyButton(void) { return m_copy_button; }
	Cell getCopyCell(void) { return m_copy_cell; }
private:

	Cell m_copy_cell;

	Button m_copy_button;
};