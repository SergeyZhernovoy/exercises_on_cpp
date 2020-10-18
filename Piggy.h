#pragma once
#include "Animal.h"
#include <iostream>

class Piggy : public Animal
{
public:
	void voice() const override;
	~Piggy() { std::cout << " delete Piggy" << std::endl; }
};

