#pragma once
#include <iostream>

class Animal
{
public:
	Animal() {}
	virtual ~Animal() { std::cout << " delete Animal" << std::endl; };
	virtual void voice() const;
};

