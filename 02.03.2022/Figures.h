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
	double modul();
	Vector sum(Vector);
	Vector razn(Vector);
	double skal(Vector);
	Vector vect(Vector);
	void umn(double);
	void print();
};

struct Circle
{
	int radius;
	int x;
	int y;
	int length();
	int square();
	void print();
};
#endif // !FIGURES_H


