#include "Module.h"
#include "Makros.h"

#include <assert.h>

Module::Module(std::string name, iRect& rect)
	:
	m_rect(rect),
	m_color(MODULE_COLOR_DEFAULT),
	m_name(name)
{	
}

Module::Module(std::string name, iRect& rect, Color c)
	:
	m_rect(rect),
	m_color(c),
	m_name(name)
{
}




