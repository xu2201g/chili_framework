#pragma once

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 768

#define MODULE_COLOR_DEFAULT Colors::Gray
#define MODULE_MOUSE_DRAG_DEFAULT iVec2(0,0)

#define MODULE_MAP_NAME "module_map"
#define MODULE_TOOLBAR_NAME "module_toolbar"
#define MODULE_MENUBAR_NAME "module_menubar"

#define MENUBAR 0
#define TOOLBAR 1
#define MAP 2

#define RECT_MENUBAR iRect(iVec2(2,2), iVec2(1001, 30))
#define RECT_TOOLBAR iRect(iVec2(1004,2), iVec2(1277, 765))
#define TOPLEFT_MAP iVec2(2,33)

#define CELL_DIM_X 20
#define CELL_DIM_Y 20

#define CELL_PADDING 1
#define CELL_COLOR_DEFAULT Colors::Gray

#define MAP_DIM_X 25
#define MAP_DIM_Y 18

#define TOOLBAR_TITLE "TOOLBAR"
#define MENU_TITLE "MENU"
#define MAP_TITLE "MAP"

#define MODULE_COLOR Colors::DarkGray

#define MENUBAR_COLOR Colors::DarkGray
#define TOOLBAR_COLOR Colors::DarkGray
#define MAP_COLOR Colors::DarkGray

#define BUTTON_WIDTH 25
#define BUTTON_HEIGHT 25
#define BUTTON_COLOR Colors::Black

#define BUTTON_NEW_TITLE "NEW"
#define BUTTON_LOAD_TITLE "LOAD"
#define BUTTON_SAVE_TITLE "SAVE"
#define BUTTON_SIMULATE_TITLE "SIMULATE"