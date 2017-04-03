#include "iVec2.h"
#include "Makros.h"

#include <assert.h>

iVec2::iVec2(const int x, const int y)
	:
	m_x(x),
	m_y(y)
{
	//assert(x >= 0 && x < SCREEN_WIDTH);
	//assert(y >= 0 && y < SCREEN_HEIGHT);
}

iVec2 iVec2::operator+(iVec2& rhs)
{
	return iVec2(this->m_x + rhs.m_x, this->m_y + rhs.m_y);
}

iVec2 iVec2::operator-(iVec2& rhs)
{
	return iVec2(this->m_x - rhs.m_x, this->m_y - rhs.m_y);
}

iVec2& iVec2::operator+=(iVec2& rhs)
{
	return *this = *this + rhs;
}

iVec2& iVec2::operator-=(iVec2& rhs)
{
	return *this = *this - rhs;
}

iVec2 iVec2::operator*(int rhs)
{
	return iVec2(m_x * rhs, m_y * rhs);
}

iVec2& iVec2::operator*=(int rhs)
{
	return *this = *this * rhs;
}

const bool iVec2::isValid(iVec2 point)
{
	if (point.m_x >= 0 && point.m_x < SCREEN_WIDTH &&
		point.m_y >= 0 && point.m_y < SCREEN_HEIGHT)
	{
		return true;
	}
	else
	{
		return false;
	}
}
