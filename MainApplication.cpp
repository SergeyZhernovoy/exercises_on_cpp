#include <iostream>

#define COUNT 10

void printNumber(int, bool);


int main()
{
	for (int number = 0; number <= COUNT; number++)
	{
		if (number % 2 == 0)
		{
			std::cout << number << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "print EVEN number from 0 to " << COUNT << std::endl;
	printNumber(COUNT, true);

	std::cout << std::endl;
	std::cout << "print ODD number from 0 to " << COUNT << std::endl;
	printNumber(COUNT, false);

}


void printNumber(int counter, bool branch)
{
	std::cout << std::endl;
	for (int number = 0; number <= COUNT; number++) {
		int EvenOdd = branch == true ? 0 : 1;
		if (number % 2 == EvenOdd) {
			std::cout << number << std::endl;
		}
	}
	std::cout << std::endl;
}

