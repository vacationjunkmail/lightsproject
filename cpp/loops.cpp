#include <iostream>
#include <string>

int main()
{
	std::string greeting = "Hello";
	int i = 0;
	while(i < 3)
	{
		std::cout << "while loop counter: " << i << std::endl;
		i++;
	}


	int while_fact = 5;
	int start_fact = while_fact;
	int counter = while_fact - 1;
	while(counter > 1)
	{
		while_fact *= counter;
		counter--;
	}
	std::cout << "\nFactorial using while loop\n";
	std::cout << "Factorial of " << start_fact << " is " << while_fact << "\n" << std::endl;;

	for(int i=3; i>=0; i--)
	{
		std::cout << "For loop counter: " << i << std::endl;
	}

	//factorial is base number * all lower positive intergers.
	//example: if base (factorial) is 5.
	//5*4*3*2*1=120 (not necessary to multiple by 1)
	int fact = 5;
	int factorial = fact;
	for(int i = factorial -1; i > 1; i--)
	{
		//std::cout << "Factorial:" << factorial << " is: "; 
		factorial = factorial * i;
		//std::cout << factorial << std::endl;
	}
	std::cout << "\nFactorial of " << fact << " is " << factorial << std::endl;

}
