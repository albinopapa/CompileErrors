#include "Vector.h"
#include <math.h>


Vector::Vector()
{}

Vector::Vector( float X, float Y)
	:
	x( X ),
	y( Y )
{
}


Vector::~Vector()
{
}

Vector Vector::operator+(const Vector &VecRhs)const
{
	return Vector(x + VecRhs.x, y + VecRhs.y);
}

Vector Vector::operator-(const Vector &VecRhs)const
{
	return Vector(x - VecRhs.x, y - VecRhs.y);
}

Vector Vector::operator*(const Vector &VecRhs)const
{
	return Vector(x * VecRhs.x, y * VecRhs.y);
}

float Vector::GetMagnitude()const
{
	return sqrt( x * x + y * y);
}

void Vector::Normalize()
{
	x = x / GetMagnitude();
	y = y / GetMagnitude();
}
