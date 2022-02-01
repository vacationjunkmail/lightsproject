#include <iostream>
#include <string>

int main ()
{
	std::string user_input;
	std::cout << "Enter Data:" << std::endl;
	//getline is used for strings.
	getline(std::cin, user_input);
	std::cout << user_input << std::endl;
	//cin.getline() used for numbers
	
}


