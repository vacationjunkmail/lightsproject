#include <iostream>
#include <vector>

// passing by reference with &.  so data changes persist outside of the function.
template <typename T>
void swap (T &a, T &b)
{
	T temp = a;
	a =b;
	b=temp;
}


int main()
{
	int a = 10;
	int b = 20;
	swap(a,b);
	std::cout<<"a: "<< a << "\tb: " << b << "\n";
	std::string firstname = "Dana";
	std::string lastname = "Wilson";
	swap(firstname,lastname);
	std::cout<<"a: "<< firstname << "\tb: " << lastname << "\n";
	return 0;
}
