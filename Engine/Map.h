#pragma once
#include <vector>
#include "Graphics.h"
#include "Cell.h"
#include "Mouse.h"

#define   REGISTERED 1
#define UNREGISTERED 0

class Map
{

public:

	Map(Vec2 pos, Vec2 dim, const int cell_dim);
	void Init(const int mode);
	void RegisterCell(Vec2 pos, Cell cell);
	
	bool MouseToCell(Mouse& mouse, Cell& cell);
	bool IsWithinMap(Vec2 pos);
	void UpdateCellColor(Mouse& mouse, Color c);
	void Draw(Vec2 offset, Graphics& gfx);
	void CopyCell(Cell& cell_in, Cell& cell_out)
	{
		cell_out.m_color = cell_in.m_color;
		cell_out.m_map_pos = cell_in.m_map_pos;
	}
public:

	Vec2 m_position;

	Vec2 m_cells_dimensions;
	Cell m_selected_cell;
	int m_cell_dimension;

	std::vector<std::vector<Cell>> m_cell_matrix;

};

