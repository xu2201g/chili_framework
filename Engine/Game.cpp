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

#include "iVec2.h"
#include "iRect.h"
#include "Render.h"
#include "Module.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd ),
	m_module(iRect(iVec2(30, 30), iVec2(330, 230)), Colors::Blue)
{
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
	UpdateModules();
}

void Game::UpdateModules()
{
	//module dragging handled here
	if (wnd.mouse.LeftIsPressed())
	{
		//iterate through modules
		iVec2 mouse_position = iVec2(wnd.mouse.GetPosX(), wnd.mouse.GetPosY());
		if (m_module.m_is_mouse_dragging)
		{
			iVec2 move = mouse_position - m_module.m_mouse_drag;
			m_module.UpdateOnDrag(move);
		}
		else
		{
			if (m_module.m_rectangle.isPointWithin(mouse_position))
			{
				m_module.m_is_mouse_dragging = true;
				m_module.m_mouse_drag = mouse_position;
			}
		}
	}
	else
	{
		m_module.m_is_mouse_dragging = false;
		m_module.Update();
	}
}

void Game::ComposeFrame()
{
	iVec2 v1(0, 0);
	iVec2 v2(799, 599);
	iRect r1(v1, v2);
	
	Render rn(gfx);
	rn.DrawRect(r1, Colors::Magenta);
	rn.DrawPoint(iVec2(550, 63), Colors::Cyan);
	rn.DrawModule(m_module);
}
