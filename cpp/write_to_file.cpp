#include <iostream>
#include <fstream>
#include <vector>

int main()
{
	//std::ofstream file;
	//file.open("hello.txt");

	std::vector<std::string> names;
	names.push_back("Tiffany");
	names.push_back("Anne");
	names.push_back("Wilson");

	//open file
	std::ofstream file ("hello.txt",std::ios::app); //std::ios::app appends instead of overwriting contents
	if(file.is_open())
	{
		std::cout << "File was opened cleanly"<<std::endl;
	}
	for(std::string n : names)
	{
		file << "Name:"<<n<<std::endl;
	}
	//close file
	file.close();

	return 0;
}

