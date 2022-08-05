#include <iostream>
#include <fstream>
#include <vector>

int main()
{
	std::vector<std::string> names;
	names.push_back("Tiffany");
	names.push_back("Anne");
	names.push_back("Wilson");

	std::string filename;
	std::cin >> filename;

	std::ofstream file (filename,std::ios::app); //std::ios::app appends instead of overwriting contents

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

