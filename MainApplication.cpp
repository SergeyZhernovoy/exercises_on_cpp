#include <iostream>
#include <time.h>

#define SIZE 10

int main()
{
	int array[SIZE][SIZE];
	struct tm newtime;
	__time64_t long_time;
	_time64(&long_time);
	_localtime64_s(&newtime, &long_time);

	std::cout << "initialize two-dimensional array with print"<<std::endl;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++) {
			array[i][j] = i + j;
			std::cout << array[i][j]  <<"\t";
		}
		std::cout << std::endl;
	}

	int sum = 0;
	int i = newtime.tm_mday % SIZE;
	std::cout << std::endl << "current day = " << newtime.tm_mday << std::endl;
	std::cout << std::endl  << "index i = " << i << std::endl << std::endl;

	std::cout << "print sum element string array" << std::endl;
	for (int j = 0; j < SIZE; j++)
	{
		sum += array[i][j];
	}
	std::cout << "sum = " << sum;
}


