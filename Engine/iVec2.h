#pragma once

#include <math.h>

class iVec2
{
public:

	iVec2(const int x, const int y);

	iVec2 operator+(iVec2& rhs);
	iVec2 operator-(iVec2& rhs);

	iVec2& operator+=(iVec2& rhs);
	iVec2& operator-=(iVec2& rhs);

	iVec2 operator*(int rhs);
	iVec2& operator*=(int rhs);

	int m_x;
	int m_y;
};