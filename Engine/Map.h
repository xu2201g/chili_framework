#pragma once
#include <string>
#include <vector>

#include "Cell.h"
#include "iRect.h"

class Map
{

public:

	Map(void) = default;
	Map(const std::string name, iVec2 dim);

	void Init(void);

	iVec2& getDim(void) { return m_dimensions; }

	void setName(std::string name) { m_name = name; }
	void setDimensions(iVec2 dim) { m_dimensions = dim; }
		
	std::vector<std::vector<Cell>>& getCellMatrix(void) { return m_cell_matrix; }
	std::string getName(void) { return m_name; }

private:

	iVec2 m_dimensions;
	std::vector<std::vector<Cell>> m_cell_matrix;

	std::string m_name;
};