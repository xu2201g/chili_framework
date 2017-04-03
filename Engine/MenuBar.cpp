#include "MenuBar.h"

MenuBar::MenuBar(std::string title, iRect& rect,  Color c)
	:
	Module(title, rect, c),

	m_New(BUTTON_NEW_TITLE, iRect(iVec2(5,5), BUTTON_WIDTH, BUTTON_HEIGHT), Colors::White),
	m_Load(BUTTON_NEW_TITLE, iRect(iVec2(33, 5), BUTTON_WIDTH, BUTTON_HEIGHT), Colors::White),
	m_Save(BUTTON_NEW_TITLE, iRect(iVec2(61, 5), BUTTON_WIDTH, BUTTON_HEIGHT), Colors::White),
	m_Simulate(BUTTON_NEW_TITLE, iRect(iVec2(89, 5), BUTTON_WIDTH, BUTTON_HEIGHT), Colors::White)
{
}


