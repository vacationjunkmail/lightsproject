#include <iostream>

//constanst
#define B 10;
int main()
{
	//symbolic constant are ready only; They are constant which means unchangable
	const int a = 5;
	enum { c = 100 };
	std::cout << a << std::endl;
	std::cout << c << std::endl;

}
