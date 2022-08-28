#include <iostream>

float cel_fah(float temp);

int main()
{

	
	
	float temp;
	std::cout << "Enter a celsuis temp:\n";
	std::cin >> temp;
	
	float converted_temp = cel_fah(temp);
	std::cout << "Celsuis Temp: "<< temp <<". Fahrenheit Temp would be: "<< converted_temp << std::endl;
		
	return 0;	
}

float cel_fah(float temp)
{
		temp = ((temp*9)/5)+32;

		return (temp);
}
