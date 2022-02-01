#include <iostream>
#include <string>

int main()
{
	std::string greeting = "Hello";
	std::string complete_greeting = greeting + " there";

	std::cout << greeting << std::endl;
	std::cout << "Get 1st character:" << greeting[0] << std::endl;
	std::cout << "Concat String:" << complete_greeting << std::endl;
	std::cout << "Get string length:" << complete_greeting.length() << std::endl;
	std::string user_input;
	std::cin >> user_input;
	std::cout << "user input:" << user_input <<std::endl;
}
