#pragma once
struct Vector
{
	Vector( float X, float Y);
	Vector();
	~Vector();

	Vector operator+(const Vector &VecRhs)const;
	Vector operator-(const Vector &VecRhs)const;
	Vector operator*(const Vector &VecRhs)const;

	float GetMagnitude()const;
	Vector Normalize();

	float x, y;
};

