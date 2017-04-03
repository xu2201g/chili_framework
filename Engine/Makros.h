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

#define RECT_MENUBAR iRect(iVec2(2,2), iVec2(1003, 33))
#define RECT_TOOLBAR iRect(iVec2(1006,2), iVec2(1277, 765))
#define RECT_MAP iRect(iVec2(2,36), iVec2(1003, 765))

#define CELL_DIM_X 20
#define CELL_DIM_Y 20

#define CELL_PADDING 1
#define CELL_COLOR_DEFAULT Colors::Green

#define MAP_DIM_X 50
#define MAP_DIM_Y 36

#define MAP_COLOR Colors::Gray