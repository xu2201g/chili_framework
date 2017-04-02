/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"
#include "Map.h"
#include "MAP_00.h"
#include "Mouse.h"

#include "Makros.h"

Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd),
	m_map(Vec2(0, 0), Vec2(MAP_X_DIM, MAP_Y_DIM), CELL_DIM),
	m_editor(Vec2(EDITOR_X_DIM, EDITOR_Y_DIM), CELL_DIM)
{
	//test();
	m_map.Init(COLOR_GRAY);
	m_editor.Init(COLOR_RANDOM);
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	if (wnd.mouse.LeftIsPressed())
	{
		//m_editor.SelectCell(wnd.mouse, *m_editor.m_color_map.MouseToCell(wnd.mouse));
		//m_map.UpdateCellColor(wnd.mouse, m_editor.m_selected_cell.m_color);

		m_map.UpdateCellColor(wnd.mouse, Colors::Green);
	}
}

void Game::ComposeFrame()
{	
	m_map.Draw(Vec2(0, 0), gfx);
	m_editor.Draw(gfx);
}
