#include <iostream>
#include <fstream>
#include <vector>

int main()
{

	//open file
	std::ifstream file ("dana.log"); 
	if(file.is_open())
	{
		std::cout << "File was opened cleanly"<<std::endl;
	}

	std::string input;
	std::vector<std::string> names;

	while(file >> input)
	{
		std::cout << "Name: " << input << std::endl;
		names.push_back(input);
	}
	//close file
	file.close();

	for(std::string name : names)
	{
		std::cout << "Name from vector: "<< name << std::endl;
	}


	return 0;
}

