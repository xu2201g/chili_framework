#include "Editor.h"
#include "Makros.h"

Editor::Editor(Vec2 dim, const int cell_dim)
	:
	m_color_map(Vec2(Graphics::ScreenWidth - dim.x*cell_dim, 0), dim, cell_dim),
	m_logic_map(Vec2(Graphics::ScreenWidth - dim.x*cell_dim, 300), dim, cell_dim)
{
	
}

void Editor::Init(const int mode)
{
	m_color_map.Init(mode);
	m_logic_map.Init(COLOR_GRAY);
}



void Editor::Draw(Graphics& gfx)
{
	m_color_map.Draw(m_color_map.m_position, gfx);
	m_logic_map.Draw(m_logic_map.m_position, gfx);
}
