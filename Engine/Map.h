#pragma once
#include <string>
#include <vector>

#include "Cell.h"
#include "iRect.h"

class Map
{

public:

	Map(void) = default;
	Map(const std::string name, iRect rect, iVec2 dim);

	void Init(void);

	iRect& getRect(void) { return m_rect; }
	iVec2& getDim(void) { return m_dimensions; }

	std::vector<std::vector<Cell>> getCellMatrix(void) { return m_cell_matrix; }
	std::string getName(void) { return m_name; }

private:

	iRect m_rect;
	iVec2 m_dimensions;

	std::vector<std::vector<Cell>> m_cell_matrix;
	std::string m_name;
};