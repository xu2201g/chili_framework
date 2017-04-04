#pragma once
#include <vector>
#include "Map.h"
//#include "Module.h"
#include "MenuBar.h"
#include "ToolBar.h"
#include "Player.h"

class Editor
{
public:

	Editor(void);

	void Init(void);
	void setMap(Map map);
	void setMode(unsigned int mode);


	unsigned int getMode(void) { return m_mode; }
	MenuBar& getMenu(void) { return m_menu; }
	ToolBar& getToolbar(void) { return m_toolbar; }
	Map& getMap(void) { return m_map; }
	Player& getPlayer(void) { return m_player; }

private:

	unsigned int m_mode;

	MenuBar m_menu;
	ToolBar m_toolbar;
	Map m_map;

	Player m_player;
};