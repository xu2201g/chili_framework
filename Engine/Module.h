#pragma once

#include "iRect.h"
#include "Colors.h"

#include <string>


class Module
{
public:

	Module(void) = default;
	Module(iRect rect, std::string name);
	Module(iRect rect, std::string name, Color c);

	void UpdateOnDrag(iVec2 move);
	void Update(void);

	std::string m_name;
	

	iVec2 m_mouse_drag;
	iRect m_rectangle;
	Color m_color_back;

	bool m_is_mouse_dragging;

};