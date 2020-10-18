#pragma once
#include "Animal.h"
#include <iostream>

class Cat : public Animal
{
public:
	~Cat() { std::cout << " delete Cat" << std::endl; }
	void voice() const override;
};

