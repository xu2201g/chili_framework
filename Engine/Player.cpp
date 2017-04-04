#include "Player.h"

Player::Player(Cell& cell, Map& map)
	:
	m_cell(cell),
	m_map(map)
{
}

void Player::move(iVec2 direction)
{
	m_cell = m_map.getCellMatrix()[m_cell.getPosition().getX() + direction.getX()][m_cell.getPosition().getY() + direction.getY()];
}
