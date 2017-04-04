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
#include "FileHandler.h"
#include "WinDialogs.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd ),
	m_editor()
{
//TEST FILHANDLER BEGIN

	//Map map_start("Start", iVec2(30, 30));

	//FileHandler fh;
	////fh.saveMap(map_start, "..\\Engine\\files\\test.txt");
	//fh.loadMap(map_start, "..\\Engine\\files\\test.txt");

	//m_editor.setMap(map_start);

//TEST FILHANDLER END


//TEST DIALOG BEGIN
	//WinDialogs wnddialog;
	//wnddialog.OpenDialog();
//TEST DIALOG END
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
		CheckMouseEvents();
	}

	CheckKeyboardEvents();
}



void Game::ComposeFrame()
{
	Render rn(gfx);
	rn.DrawEditor(m_editor);
}

void Game::CheckKeyboardEvents(void)
{
	if (wnd.kbd.KeyIsPressed(VK_UP))
	{
		m_editor.getPlayer().move(iVec2(0, -1));
	}
	if (wnd.kbd.KeyIsPressed(VK_DOWN))
	{
		m_editor.getPlayer().move(iVec2(0, 1));
	}

	if (wnd.kbd.KeyIsPressed(VK_LEFT))
	{
		m_editor.getPlayer().move(iVec2(-1, 0));
	}
	if (wnd.kbd.KeyIsPressed(VK_RIGHT))
	{
		m_editor.getPlayer().move(iVec2(1, 0));
	}

}

void Game::CheckMouseEvents()
{
	iVec2 mouse_position(wnd.mouse.GetPosX(), wnd.mouse.GetPosY());

	//template button clicked
	if (m_editor.getToolbar().getCopyButton().getRect().isPointWithin(mouse_position))
	{
		m_editor.setMode(EDITOR_MODE_COPY_CELL);
	};

	//map clicked
	if (m_editor.getMap().getRect().isPointWithin(mouse_position))
	{
		switch (m_editor.getMode())
		{
			case EDITOR_MODE_COPY_CELL: copyCell(mouse_position); break;
		}
	}
}

void Game::copyCell(iVec2 mouse_position)
{
	iVec2 tmp = mouse_position - m_editor.getMap().getRect().getTopLeft();
	iVec2 cellPositon(tmp.getX() / CELL_DIM_X, tmp.getY() / CELL_DIM_Y);

	if (!(cellPositon.getX() >= m_editor.getMap().getDim().getX() || cellPositon.getY() >= m_editor.getMap().getDim().getY()))
	{
		m_editor.getMap().getCellMatrix()[cellPositon.getX()][cellPositon.getY()].setCell(m_editor.getToolbar().getCopyCell());
		//m_editor.getMap().getCellMatrix()[cellPositon.getX()][cellPositon.getY()].setColor(m_editor.getToolbar().getCopyCell().getColor());
	}

}

void Game::CheckMouseToolBarEvents()
{

}

void Game::CheckMouseMenuBarEvents()
{

}

void Game::CheckMouseMapEvents()
{

}