#pragma once
#include <iostream>

class Point2D
{
private:
	double x = 0;
	double y = 0;
public:
	Point2D() : x(0), y(0)
	{}

	Point2D(double _x, double _y, double _z) : x(_x), y(_y)
	{}

	void show()
	{
		std::cout << '\n' << x << ' ' << y;
	}
};

