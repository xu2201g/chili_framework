#include "Makros.h"
#include "Editor.h"

Cell cell;

Editor::Editor(void)	
	:
	m_menu(MENU_TITLE, RECT_MENUBAR,  MODULE_COLOR),
	m_toolbar(TOOLBAR_TITLE, RECT_TOOLBAR, MODULE_COLOR),
	m_map(MAP_TITLE, iVec2(MAP_DIM_X, MAP_DIM_Y), MODULE_COLOR, iRect(TOPLEFT_MAP, TOPLEFT_MAP + iVec2(MAP_DIM_X * CELL_DIM_X, MAP_DIM_Y * CELL_DIM_Y))),
	m_mode(EDITOR_MODE_COPY_CELL),
	m_player(m_map.getCellMatrix()[0][0], m_map)
{
	Init();
}

void Editor::Init(void)
{
	//Module module_menubar(RECT_MENUBAR, MODULE_MENUBAR_NAME);	
	//Module module_toolbar(RECT_TOOLBAR, MODULE_TOOLBAR_NAME);
	//Module module_map(RECT_MAP, MODULE_MAP_NAME);
	
	//m_modules.push_back(module_menubar);
	//m_modules.push_back(module_toolbar);
	//m_modules.push_back(module_map);

	m_map.Init();
}

void Editor::setMap(Map map)
{
	m_map = map;
}

void Editor::setMode(unsigned int mode)
{
	m_mode = mode;
}
