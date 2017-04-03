#pragma once

#include "iRect.h"
#include "Colors.h"


class Module
{
public:

	Module(iRect rect);
	Module(iRect rect, Color c);

	void UpdateOnDrag(iVec2 move);
	void Update(void);

	iVec2 m_mouse_drag;
	iRect m_rectangle;
	Color m_color_back;

	bool m_is_mouse_dragging;

};