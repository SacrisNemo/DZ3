#include "Figures.h"

double Vector::modul()
{
	return sqrt(x*x+y*y);
}

Vector Vector::sum(Vector v1)
{
	v1.x += x;
	v1.y += y;
	v1.z += z;
	return v1;
}

Vector Vector::razn(Vector v1)
{
	v1.x = x - v1.x;
	v1.y = y - v1.y;
	v1.z = z - v1.z;
	return v1;
}

double Vector::skal(Vector v1)
{
	return (v1.x*x+v1.y*y+v1.z*z);
}

Vector Vector::vect(Vector v1)
{
	Vector v;
	v.x = (y * v1.z - z * v1.y);
	v.y = (z * v1.x - x * v1.z);
	v.z = (x * v1.y - y * v1.x);
	return v;
}

void Vector::umn(double a)
{
	x *= a;
	y *= a;
	z *= a;
}

void Vector::print()
{
	std::cout << "X " << x << " Y " << y << " length " << modul() << std::endl;
}

int Circle::length()
{
	return (2*M_PI*radius);
}

int Circle::square()
{
	return (M_PI*radius*radius);
}

void Circle::print()
{
	std::cout << "R " << radius << " X " << x << " Y " << y << std::endl;
}
