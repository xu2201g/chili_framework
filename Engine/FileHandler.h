#pragma once
#include <iostream>
#include <fstream>

#include "Map.h"

class FileHandler
{

public:

	FileHandler(void) = default;

	bool saveMap(Map& map, std::string path);
	bool saveMap(std::string title, iVec2 dimensions, Color color, std::string path);

	bool loadMap(Map& map, std::string path);

private:

	

};