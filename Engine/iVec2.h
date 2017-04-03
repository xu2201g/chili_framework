#pragma once

class iVec2
{
public:

	iVec2(void) = default;
	iVec2(const int x, const int y);

	iVec2 operator+(iVec2& rhs);
	iVec2 operator-(iVec2& rhs);

	iVec2& operator+=(iVec2& rhs);
	iVec2& operator-=(iVec2& rhs);

	iVec2 operator*(int rhs);
	iVec2& operator*=(int rhs);

	static const bool isValid(iVec2 point);

	int m_x;
	int m_y;
};