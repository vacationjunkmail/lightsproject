#include <iostream>
#include <string>

//use do while when you want to run the loop at least once.
int main()
{
	std::string password = "taco";
	std::string guess;
	do 
	{
		std::cout << "Guess the password:";
		std::cin >> guess;
	} while(guess != password);
}
