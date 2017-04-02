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
	void Init(void);
	void RegisterCell(Vec2 pos, Cell cell);
	
	Cell* MouseToEditorCell(Mouse& mouse);
	bool IsWithinMap(Vec2 pos);
	void Draw(const int x_off, const int y_off, Graphics& gfx);

public:

	Vec2 m_position;

	Vec2 m_cells_dimensions;

	int m_cell_dimension;

	std::vector<std::vector<Cell>> m_cell_matrix;

};

