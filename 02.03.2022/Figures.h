#ifndef FIGURES_H
#define FIGURES_H
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

struct Vector
{
	double x;
	double y;
	double z;
	Vector()
	{
		this->x = 0;
		this->y = 0;
		this->z = 0;
	};
	Vector(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	};
	Vector(const Vector& other)
	{
		this->x = other.x;
		this->y = other.y;
		this->z = other.z;
	};
	double modul();
	Vector sum(Vector);
	Vector razn(Vector);
	double skal(Vector);
	Vector vect(Vector);
	void umn(double);
	void print();
	~Vector()
	{

	};
};

struct Circle
{
	int radius;
	int x;
	int y;
	Circle()
	{
		x = 0;
		y = 0;
		radius = 0;
	};
	Circle(int x, int y, int radius)
	{
		this->x = x;
		this->y = y;
		this->radius = radius;
	};
	Circle(const Circle& other)
	{
		this->x = other.x;
		this->y = other.y;
		this->radius = other.radius;
	};
	int length();
	int square();
	void print();
	~Circle()
	{

	};
};
#endif // !FIGURES_H


