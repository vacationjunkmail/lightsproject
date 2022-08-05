#include <iostream>
#include <fstream>
#include <vector>

int main()
{

	//open file
	std::ifstream file ("dana.log"); 

	if(file.is_open())
	{
		std::cout << "File is open" << std::endl;;
	}
	std::string line;
	getline(file,line);
	std::cout << line << "\n";
		
	return 0;
}

