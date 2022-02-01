#include <iostream>
#include <float.h>

int main()
{
 
	float a = 10 / 3.0;
	a = a * 70000000;
	double b = 70000; // Scientific notation 7.7E4. 7.7 x 10^4
	long double c;
	//std::cout << b << std::endl;
	std::cout << std::fixed << a << std::endl;
	std::cout << "Trust worthy digits for float:" << FLT_DIG << std::endl;
	std::cout << "Trust worthy digits for double:" << DBL_DIG << std::endl;
	std::cout << "Trust worthy digits for long double:" << LDBL_DIG << std::endl;
	
}
