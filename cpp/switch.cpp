#include <iostream>
#include <string>

int main()
{
	int age_guess;
	std::cout << "Guess my age: ";
	std::cin >> age_guess;

	//enum are intergral types
	enum season{summer,spring,fall,winter};

	//Declaring now and assigning it.  Could have been done in two steps;
	// season now;
	// now = winter;
	season now = winter;

	switch(age_guess)
	{
		case 13:
			std::cout << "You are 13" << std::endl;
			break;
		case 14:
			std::cout << "You are 12" << std::endl;
			break;
		case 15:
		case 16:
			std::cout << "You are 15 or 16" << std::endl;
			break;
		default:
			std::cout << "You are " << age_guess << std::endl;
			break;
	}

	switch(now)
	{
		case summer:
			std::cout << "Summer in enum is: "<< summer << std::endl;
			break;
		case spring:
			std::cout << "Spring in enum is: " << spring << std::endl;
			break;
		case fall:
			std::cout << "Fall in enum is:" << fall << std::endl;
			break;
		case winter:
			std::cout << "Winter in enum is: " << winter << std::endl;
			break;
	}
	std::cout << "\nUsing a enum class example:\n" << std::endl;

	enum class Season{summer,spring,fall,winter};
	Season cnow = Season::winter;
	// enum class is a c++ 11 feature
	switch(cnow)
	{
		case Season::summer:
			std::cout << "Summer" << std::endl;
			break;
		case Season::winter:
			std::cout << "Winter" << std::endl;
			break;
		case Season::spring:
			std::cout << "Spring" << std::endl;
			break;
		case Season::fall:
			std::cout << "Fall" << std::endl;
			break;
	}
}
