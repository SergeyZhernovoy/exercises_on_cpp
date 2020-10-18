#include <iostream>
#include <ctime>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Piggy.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Изучение наследования" << std::endl << std::endl;
	std::cout << "Создаем массив указателей на класс Animal" << std::endl;
	Animal* animals[20];
	unsigned random_value = 3;
	srand(time(0));
	for (int index = 0; index < 20; index++)
	{
		unsigned random_value = rand() % 3 + 1;
		if (random_value == 1)
		{
			animals[index] = new Cat;
		}

		if (random_value == 2)
		{
			animals[index] = new Dog;
		}

		if (random_value == 3)
		{
			animals[index] = new Piggy;
		}
	}

	for (auto& animal : animals)
	{
		std::cout << std::endl;
		std::cout << "Animal says = ";
		animal->voice();
		std::cout << std::endl;
		delete animal;
		std::cout << std::endl;
	}

	return 0;
}
