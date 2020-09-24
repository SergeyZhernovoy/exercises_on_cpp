#include "Helpers.h"
#include <math.h>

double powSum(int a, int b) 
{
	double exponent = 2;
	double summa = static_cast<double>(a + b);
	return pow(summa, exponent);
}
