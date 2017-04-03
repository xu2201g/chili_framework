#pragma once

#include "Module.h"
#include "Button.h"
#include "Makros.h"
#include "Colors.h"
#include "iRect.h"

class MenuBar : public Module
{

public:

	MenuBar(std::string title, iRect& rect, Color c);
	
	Button& getNew(void) { return m_New; }
	Button& getLoad(void) { return m_Load; }
	Button& getSave(void) { return m_Save; }
	Button& getSimulate(void) { return m_Simulate; }

private:

	Button m_New;
	Button m_Load;
	Button m_Save;

	Button m_Simulate;
};