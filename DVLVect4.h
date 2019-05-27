#pragma once
#include <math.h>
#include <iostream>

class DVLVect4
{
public:
	float	_x{ 0 };
	float	_y{ 0 };
	float	_z{ 0 };
	float	_w{ 0 };

	DVLVect4() {}

	void set(float p_x, float p_y, float p_z, float p_w)
	{
		_x = p_x;
		_y = p_y;
		_z = p_z;
		_w = p_w;
	}

	DVLVect4(const DVLVect4& p_vec)
	{
		set(p_vec._x, p_vec._y, p_vec._z, p_vec._w);
	}
	DVLVect4(float p_x, float p_y, float p_z, float p_w)
	{
		set(p_x, p_y, p_z, p_w);
	}

	bool operator==(const DVLVect4& p_vec) const
	{
		return _x == p_vec._x && _y == p_vec._y && _z == p_vec._z && _w == p_vec._w;
	}
	bool operator!=(const DVLVect4& p_vec) const
	{
		return _x != p_vec._x || _y != p_vec._y || _z != p_vec._z || _w != p_vec._w;
	}

	DVLVect4& operator+=(const float f)
	{
		_x += f;
		_y += f;
		_z += f;
		_w += f;
		return *this;
	}

	DVLVect4& operator-=(const float f)
	{
		_x -= f;
		_y -= f;
		_z -= f;
		_w -= f;
		return *this;
	}

	DVLVect4& operator+=(const DVLVect4& vec)
	{
		_x += vec._x;
		_y += vec._y;
		_z += vec._z;
		_w += vec._w;
		return *this;
	}

	DVLVect4& operator-=(const DVLVect4& vec)
	{
		_x -= vec._x;
		_y -= vec._y;
		_z -= vec._z;
		_w -= vec._w;
		return *this;
	}

	DVLVect4  operator+(const DVLVect4& vec1) const
	{
		DVLVect4 vec(*this);
		vec += vec1;
		return vec;
	}

	DVLVect4  operator-(const DVLVect4& vec1) const
	{
		DVLVect4 vec(*this);
		vec -= vec1;
		return vec;
	}
	
	DVLVect4  operator+(const float f) const
	{
		DVLVect4 vec(*this);
		vec += f;
		return vec;
	}

	DVLVect4  operator-(const float f) const
	{
		DVLVect4 vec(*this);
		vec -= f;
		return vec;
	}
	
	DVLVect4  operator-() const
	{
		DVLVect4 vec;
		vec -= *this;
		return vec;
	}
};
