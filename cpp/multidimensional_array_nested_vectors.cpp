#include <iostream>
#include <vector>

int main()
{
	//4 is the number of elements in the array
	//3 is how many arrays you have
	int grades[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

	std::cout<<"Nested arrays\n";
	for(int row = 0; row<3;row++)
	{
		for(int column=0;column<4;column++)
		{
			std::cout << grades[row][column] << "\t";
		}	
		std::cout << std::endl;
	}

	std::vector<std::vector<int>> grades_v = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	std::cout<<"\nNested vectors\n";
	for(int row = 0; row<3;row++)
	{
		for(int column=0;column<4;column++)
		{
			std::cout << grades_v[row][column] << "\t";
		}	
		std::cout << std::endl;
	}
	return 0;
}
