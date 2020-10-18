#pragma once
#include "Animal.h"
#include <iostream>

class Dog : public Animal
{
public:
	~Dog() { std::cout << " delete Dog" << std::endl; }
	void voice() const override ;
};

