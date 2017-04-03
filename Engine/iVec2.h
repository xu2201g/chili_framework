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

	int getX(void) { return m_x; }
	int getY(void) { return m_y; }

	void setX(int x) { m_x = x; }
	void setY(int y) { m_y = y; }

private:

	int m_x;
	int m_y;
};