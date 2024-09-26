#include <iostream>

int add(int x, int y) {
		
	return (x+y);
}

int main()
{
	int numArray[3][2] = {
		{867,5309},
		{777,9311},
		{3,0}
		};
	
	// Array to store values to add.	
	int addArray[2];
	
	std::cout << "Running calculator....\n";
	
	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 2; b++) {
			addArray[b] = numArray[a][b];
		}
		std::cout << "\t"<<addArray[0]<<" + "<<addArray[1]<<" = " << add(addArray[0],addArray[1])<< "\n";
	}
}
