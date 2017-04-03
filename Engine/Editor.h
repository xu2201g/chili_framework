#pragma once
#include <vector>
#include "Map.h"
//#include "Module.h"
#include "MenuBar.h"
#include "ToolBar.h"

class Editor
{
public:

	Editor(void);

	void Init(void);

	//std::vector<Module> m_modules;

	MenuBar& getMenu(void) { return m_menu; }
	ToolBar& getToolbar(void) { return m_toolbar; }
	Map& getMap(void) { return m_map; }

private:

	MenuBar m_menu;
	ToolBar m_toolbar;
	Map m_map;
};