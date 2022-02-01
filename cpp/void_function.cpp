#include <iostream>
#include <cmath>

double power(double base,int exponent)
{
	double results = 1;

	for(int i=0;i<exponent;i++)
	{
		results = results * base;
	}
	return results;	
}

void print_power(double base,int exponent)
{

	double my_power = power(base,exponent);
	std::cout << base <<" to the power of "<< exponent;
	std::cout <<" in void function the answer is: "<< my_power << std::endl;
}


int main()
{
	double base;
	int exponent;
	std::cout << "Please enter a base number: ";
	std::cin >> base;
	std::cout << "Please enter an exponent: ";
	std::cin >> exponent;

	//std::cout << base <<" to the power of "<< exponent;
	double std_power = pow(base,exponent);
	//std::cout <<" is: "<< std_power << std::endl;
	//double my_power = power(base,exponent);
	//std::cout <<"With custome function the answer is: "<< my_power << std::endl;
	print_power(base,exponent);
	//print_power(4,5);

}
