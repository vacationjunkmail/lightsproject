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
	int addArray[2];
	
	std::cout << "Running calculator....\n";
	//std::cout << "\t"<<numArray[0][0]<<" + "<<numArray[0][1]<<" = " << add(numArray[0][0],numArray[0][1])<< "\n";
	
	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 2; b++) {
			addArray[b] = numArray[a][b];
		}
		std::cout << "\t"<<addArray[0]<<" + "<<addArray[1]<<" = " << add(addArray[0],addArray[1])<< "\n";
		//std::cout << "\t" << add(addArray[0],addArray[1])<<"\n"; 
	}
	
}
