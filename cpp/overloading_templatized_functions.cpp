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


template <typename T>
void swap(T a[], T b[],int size)
{
	for(int i =0; i < size; i++)
	{
		T temp = a[i];
		a[i] = b[i];
		b[i] = temp;

	}
}

template <typename T>
void print_array(T a[], T b[], int size)
{
	for(int i = 0; i < 6; i++)
	{
		std::cout << a[i] << b[i] << "\t";
	}
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

	int nines[] = {9,9,9,9,9,9};
	int ones[] = {1,1,1,1,1,1};
	/*
	for(int i = 0; i < 6; i++)
	{
		std::cout << nines[i] << ones[i] << "\t";
	}
	*/
	print_array(nines,ones,6);
	std::cout << "\n";
	swap(nines,ones,6);
	print_array(nines,ones,6);
	std::cout << "\n";

	return 0;
}
