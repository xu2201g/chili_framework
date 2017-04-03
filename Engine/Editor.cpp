#include "Makros.h"
#include "Editor.h"


Editor::Editor(void)	
	:
	m_menu(MENU_TITLE, RECT_MENUBAR,  MODULE_COLOR),
	m_toolbar(TOOLBAR_TITLE, RECT_TOOLBAR, MODULE_COLOR),
	m_map(MAP_TITLE, RECT_MAP, iVec2(MAP_DIM_X, MAP_DIM_Y))	
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
