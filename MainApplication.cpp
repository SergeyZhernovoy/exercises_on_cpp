// HelloWorld.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Helpers.h"


int main()
{
	double A = 2;
	double B = 3;
	std::cout << "Pow A (" << A << ") + B (" << B << ") = " << powSum(A, B);
	std::cin.get();
	return 0;
}
