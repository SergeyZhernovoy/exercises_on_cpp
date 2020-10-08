// HelloWorld.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Vector.h"
#include "Point.h"



int main()
{
	Vector v(10, 10, 10);
	v.show();
	v.length();
	Point2D point;
	point.show();
}


