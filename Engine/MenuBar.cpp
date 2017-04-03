#include "MenuBar.h"

MenuBar::MenuBar(std::string title, iRect& rect,  Color c)
	:
	Module(title, rect, c),
	
	m_New(BUTTON_NEW_TITLE, iRect(iVec2(2, 2), BUTTON_WIDTH, BUTTON_HEIGHT), BUTTON_COLOR),
	m_Load(BUTTON_LOAD_TITLE, iRect(iVec2(30, 2), BUTTON_WIDTH, BUTTON_HEIGHT), BUTTON_COLOR),
	m_Save(BUTTON_SAVE_TITLE, iRect(iVec2(58, 2), BUTTON_WIDTH, BUTTON_HEIGHT), BUTTON_COLOR),
	m_Simulate(BUTTON_SIMULATE_TITLE, iRect(iVec2(86, 2), BUTTON_WIDTH, BUTTON_HEIGHT), BUTTON_COLOR)
{
}


