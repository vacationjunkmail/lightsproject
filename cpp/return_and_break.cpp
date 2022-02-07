#include <iostream>
#include <string>

int main()
{
	std::string sentence = "Hello";

	for(int i=0; i< sentence.size(); i++)
	{
		std::cout << sentence[i] << "\t";
		if(sentence[i] == 'o')
		{
			std::cout << "\nfound o!\n";
			break;
		}
	}
}
