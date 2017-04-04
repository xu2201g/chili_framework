#include "ToolBar.h"
#include "Makros.h"


ToolBar::ToolBar(std::string title, iRect& rect, Color color)
	:
	Module(title, rect, color),
	m_copy_button("CELL_TEMPLATE", iRect(iVec2(2, 2), CELL_DIM_X, CELL_DIM_Y), Colors::Red),
	m_copy_cell(Cell(iVec2(0,0), iVec2(CELL_DIM_X, CELL_DIM_Y), Colors::Red))
{
}