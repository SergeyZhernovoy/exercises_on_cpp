
#include <iostream>

int main()
{
	std::string AnyValue{ "lesson 14.3 - home work in c++ in Visual Studio" };
	std::cout << "string value = " << AnyValue << std::endl;
	std::cout << "string value length = " << AnyValue.size() << std::endl;

	std::cout << "\n\nFirst way  = AnyValue.substr\n\n";
	std::cout << "first symbol string value = " << AnyValue.substr(0,1) << std::endl;
	std::cout << "last symbol string value = " << AnyValue.substr(AnyValue.size() - 1, 1) << std::endl;

	std::cout << "\n\nSecond way AnyValue.c_str\n\n";
	std::cout << "first symbol string value = " << AnyValue.c_str()[0] << std::endl;
	std::cout << "last symbol string value = " << AnyValue.c_str()[AnyValue.size() - 1] << std::endl;

	std::cout << "\n\nThird way AnyValue[position]\n\n";
	std::cout << "first symbol string value = " << AnyValue[0] << std::endl;
	std::cout << "last symbol string value = " << AnyValue[AnyValue.size() - 1] << std::endl;

	return 0;
}

