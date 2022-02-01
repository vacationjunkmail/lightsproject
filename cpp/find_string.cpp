#include <iostream>
#include <string>

int main()
{
	std::string greet = "What the Hell?";
	greet.replace(greet.find("Hell"),4,"****");

	std::cout << greet << std::endl;
}
