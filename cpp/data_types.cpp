#include <iostream>
#include <climits>

//https://youtu.be/_bYFu9mBnr4?t=6323

void bit_function(int t)
{
	int results = t;
	results = results * 8;
	std::cout << t << " in bytes is: "<< results << std::endl;
}
int main()
{
	short a;
	int b;
	long c;
	long long d;

	unsigned short aa;
	unsigned int bb;
	unsigned long cc;
	unsigned long long dd;

	//could have used declaration to get size as well
	std::cout << "In bytes:" << sizeof(dd) << std::endl;
	bit_function(sizeof(dd));

	// int, long, and long long(LLong_MAX version exist
	std::cout << "Short max: "<< SHRT_MAX << std::endl;
	std::cout << "Short mix: "<< SHRT_MIN << std::endl;
	std::cout << "Unsigned Short mix: "<< USHRT_MAX << std::endl;

	return 0;
}
