#pragma once

#include "iRect.h"
#include "Colors.h"

#include <string>

class Module
{

public:

	Module(std::string name, iRect& rect);
	Module(std::string name, iRect& rect, Color c);

	iRect& getRect(void) { return m_rect; }
	Color& getColor(void) { return m_color; }
	
protected:

	std::string m_name;

	
	iRect m_rect;
	Color m_color;

	iVec2 m_mouse_drag;
	bool m_is_mouse_dragging;

};