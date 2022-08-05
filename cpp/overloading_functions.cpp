#include <iostream>
#include <vector>
#include <string>

//overloading is basically creating multiple version of a function.   
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;

	std::cout << "a: " << a << "\tb: " << b << "\n";
}

void swap(std::string &a, std::string &b)
{

	std::string temp = a;
	a = b;
	b = temp;
	std::cout << "a: " << a << "\tb: " << b << "\n";
}

int main()
{
	int a = 1;
	int b = 2;
	swap(a,b);

	std::string first_name = "Dana";
	std::string last_name = "Wilson";
	swap(first_name,last_name);
	return 0;
}
