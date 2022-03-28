#include <iostream>
#include <string>

int main()
{
	std::string greeting = "Hello";
	int guesses[10] = {1,2,3,4,5};
	//std::cout << guesses[4] << std::endl;

	//have to figure out size
	int size = sizeof(guesses)/sizeof(guesses[0]);

	//if array is 10 elements but you only have 4.  It will populate elements with 0
	//for loop you would need to keep track of the number of elements some way then 
	//loop over that number instead of size
	//int num_of_elements = 5

	for(int i = 0; i < size; i++)
	{
		std::cout << guesses[i] << "\t";
	}
	std::cout << std::endl;
	

}
