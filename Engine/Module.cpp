#include "Module.h"
#include "Makros.h"

#include <assert.h>

Module::Module( iRect rect)
	:
	m_rectangle(rect),
	m_color_back(MODULE_COLOR_DEFAULT),
	m_mouse_drag(MODULE_MOUSE_DRAG_DEFAULT),
	m_is_mouse_dragging(false)
{	
}

Module::Module(iRect rect, Color c)
	:
	m_rectangle(rect),
	m_color_back(c),
	m_mouse_drag(MODULE_MOUSE_DRAG_DEFAULT),
	m_is_mouse_dragging(false)
{
}

void Module::UpdateOnDrag(iVec2 move)
{
	m_rectangle.UpdateOnDrag(move);
}

void Module::Update(void)
{
	m_rectangle.Update();
}
