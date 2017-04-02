#include "Editor.h"

Editor::Editor(Vec2 dim, const int cell_dim)
	:
	m_map(Vec2(Graphics::ScreenWidth - dim.x*cell_dim, 0), dim, cell_dim)
{
	
}

void Editor::Init(void)
{
	m_map.Init();
}

void Editor::SelectCell(Cell& cell)
{
	m_selected_cell.m_color = cell.m_color;
}

void Editor::Draw(Graphics& gfx)
{
	m_map.Draw(Graphics::ScreenWidth - int(m_map.m_cells_dimensions.x*m_map.m_cell_dimension), 0, gfx);
}
