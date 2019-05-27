#pragma once
#include <math.h>
#include <iostream>

class DVLVect3
{
public:
	float	_x{ 0 };
	float	_y{ 0 };
	float	_z{ 0 };

	DVLVect3() {}

	void set(float p_x, float p_y, float p_z)
	{
		_x = p_x;
		_y = p_y;
		_z = p_z;
	}

	DVLVect3(const DVLVect3& p_vec)
	{
		set(p_vec._x, p_vec._y, p_vec._z);
	}
	DVLVect3(float p_x, float p_y, float p_z)
	{
		set(p_x, p_y, p_z);
	}

	bool operator==(const DVLVect3& p_vec) const
	{
		return _x == p_vec._x && _y == p_vec._y && _z == p_vec._z;
	}
	bool operator!=(const DVLVect3& p_vec) const
	{
		return _x != p_vec._x || _y != p_vec._y || _z != p_vec._z;
	}

	DVLVect3& operator+=(const float f)
	{
		_x += f;
		_y += f;
		_z += f;
		return *this;
	}

	DVLVect3& operator-=(const float f)
	{
		_x -= f;
		_y -= f;
		_z -= f;
		return *this;
	}

	DVLVect3& operator+=(const DVLVect3& vec)
	{
		_x += vec._x;
		_y += vec._y;
		_z += vec._z;
		return *this;
	}

	DVLVect3& operator-=(const DVLVect3& vec)
	{
		_x -= vec._x;
		_y -= vec._y;
		_z -= vec._z;
		return *this;
	}

	DVLVect3  operator+(const DVLVect3& vec1) const
	{
		DVLVect3 vec(*this);
		vec += vec1;
		return vec;
	}

	DVLVect3  operator-(const DVLVect3& vec1) const
	{
		DVLVect3 vec(*this);
		vec -= vec1;
		return vec;
	}

	DVLVect3  operator+(const float f) const
	{
		DVLVect3 vec(*this);
		vec += f;
		return vec;
	}

	DVLVect3  operator-(const float f) const
	{
		DVLVect3 vec(*this);
		vec -= f;
		return vec;
	}

	DVLVect3  operator-() const
	{
		DVLVect3 vec;
		vec -= *this;
		return vec;
	}
};
