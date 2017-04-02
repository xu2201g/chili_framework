#include "iVec2.h"

iVec2::iVec2(const int x, const int y)
	:
	m_x(x),
	m_y(y)
{
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