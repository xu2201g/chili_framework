#include "FileHandler.h"



bool FileHandler::saveMap(Map& map, std::string path)
{	
	std::ofstream writer(path);
	bool failed = false;

	if (writer.is_open())
	{
		//header
		int type = 17;
		writer << type << std::endl;

		writer << map.getName() << std::endl;
		writer << map.getDim().getX() << " " << map.getDim().getY() << std::endl;

		//cell matrix
		for (int y = 0; y < map.getDim().getY(); ++y)
		{
			for (int x = 0; x < map.getDim().getX(); ++x)
			{
				writer << map.getCellMatrix()[x][y].getColor().dword << " ";
			}
			writer << std::endl;
		}

		failed = false;
	}
	else
	{
		//LOG ERROR
		failed = true;
	}

	writer.close();
	return failed;
}

bool FileHandler::saveMap(std::string title, iVec2 dimensions, Color color, std::string path)
{
	Map map(title, dimensions, color);
	
	return saveMap(map, path);
}

bool FileHandler::loadMap(Map& map, std::string path)
{
	//preprocess
	bool failed = false;
	int type = 0;
	std::ifstream reader(path);
	
	//map
	std::string map_name;
	unsigned int dim_x;
	unsigned int dim_y;

	if (reader.is_open())
	{
		reader >> type;
		if (type == 0) { return failed = true; }

		reader >> map_name; 
		map.setName(map_name);

		reader >> dim_x;
		reader >> dim_y;
		map.setDimensions(iVec2(dim_x, dim_y));

		map.Init();
		Cell cell;
		std::string string_color;
		for (unsigned int y = 0; y < dim_y; ++y)
		{
			for (unsigned int x = 0; x < dim_x; ++x)
			{
				reader >> string_color;
				Color color = std::stoi(string_color);
				map.getCellMatrix()[x][y].setColor(color);
			}
		}
	}


	return failed;
}