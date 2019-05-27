#pragma once
#include <math.h>
#include <iostream>

class DVLVect2
{
public:
	float	_x{ 0 };
	float	_y{ 0 };

	DVLVect2(){}

	void set(float p_x, float p_y)
	{
		_x = p_x;
		_y = p_y;
	}

	DVLVect2(const DVLVect2& p_vec)
	{
		set(p_vec._x, p_vec._y);
	}
	DVLVect2(float p_x, float p_y)
	{
		set(p_x, p_y);
	}

	bool operator==(const DVLVect2& p_vec) const
	{
		return _x == p_vec._x && _y == p_vec._y;
	}
	bool operator!=(const DVLVect2& p_vec) const
	{
		return _x != p_vec._x || _y != p_vec._y;
	}

	DVLVect2& operator+=(const float f)
	{
		_x += f;
		_y += f;
		return *this;
	}

	DVLVect2& operator-=(const float f)
	{
		_x -= f;
		_y -= f;
		return *this;
	}

	DVLVect2& operator+=(const DVLVect2& vec)
	{
		_x += vec._x;
		_y += vec._y;
		return *this;
	}

	DVLVect2& operator-=(const DVLVect2& vec)
	{
		_x -= vec._x;
		_y -= vec._y;
		return *this;
	}

	DVLVect2  operator+(const DVLVect2& vec1) const
	{
		DVLVect2 vec(*this);
		vec += vec1;
		return vec;
	}

	DVLVect2  operator-(const DVLVect2& vec1) const
	{
		DVLVect2 vec(*this);
		vec -= vec1;
		return vec;
	}

	DVLVect2  operator+(const float f) const
	{
		DVLVect2 vec(*this);
		vec += f;
		return vec;
	}

	DVLVect2  operator-(const float f) const
	{
		DVLVect2 vec(*this);
		vec -= f;
		return vec;
	}

	DVLVect2  operator-() const
	{
		DVLVect2 vec;
		vec -= *this;
		return vec;
	}
};
