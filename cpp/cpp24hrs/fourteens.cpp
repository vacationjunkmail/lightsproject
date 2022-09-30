#include <iostream>

int main()
{
	int counter = 0;
	int multiples = 0; 
	int stop = 19;
	while(counter < 500)
	{
		counter++;
		if(counter % 14 == 0)
		{
			std::cout << counter << " ";
			multiples++;
		}
		if(multiples > stop){
			break;
		}
		
	}
	std::cout << std::endl;
	return 0;
}
