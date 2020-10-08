#pragma once
#include <iostream>
#include <cmath>
#define EXPONENT 2


class Vector
{
private:
	double x = 0;
	double y = 0;
	double z = 0;
public:
	Vector() : x(0), y(0), z(0)
	{}

	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}

	void show()
	{
		std::cout << '\n' << x <<' ' << y << ' ' << z;
	}

	void length()
	{
		std::cout << '\n' <<"length vector = " << sqrt(pow(x, EXPONENT) + pow(y, EXPONENT) + pow(z, EXPONENT)) ;
	}

};

