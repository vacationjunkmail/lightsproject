#include <iostream>
#include <string>

int main()
{
	std::string greet = "hello";
	//greet.append(" there")
	//greet += " there";
	//greet.insert(0,"Added to front of ");
	//total amount of characters to remove
	//start stop delete
	//greet.erase(3,5);
	//greet.erase(greet.length()-1);
	greet.pop_back();

	greet.replace(0,4,"Heaven");
	//.size() gives you the same.
	std::cout << "Size of "<< greet << " is:" << greet.length() << std::endl;
}
