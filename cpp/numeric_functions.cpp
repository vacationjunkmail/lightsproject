#include <iostream>
#include <cmath>

int main()
{
	int a = 10;
	float b = 3.25; 
	std::cout << remainder(a,b) << std::endl;
	//modulus can't handle decimals
	std::cout << 10 % 3 << std::endl;
	//fmod does work but not as accurate as remainder.
	std::cout << fmod(a,b) << std::endl;
	//get highest of data turned in
	std::cout << "Highest value:" << fmax(a,b) << std::endl;
	std::cout << "Smallest value:" << fmin(a,b) << std::endl;
	//more math functions ceil,floor,round,trunc
}
