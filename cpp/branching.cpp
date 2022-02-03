#include <iostream>
#include <string>

int main()
{
	std::cout << "How old are you: ";
	int age;
	std::cin >> age;

	if(age < 13)
	{
		std::cout << "You are not old enough" << std::endl;
	}
	else if (age < 19)
	{
		std::cout << "You are almost 19" << std::endl;
	}
	else
	{
		std::cout << "You are 19 or older" << std::endl;
	}
}
