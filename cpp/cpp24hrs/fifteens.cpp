#include <iostream>
#include <cstdlib>
int main()
{
	int counter = 0;
	int multiples = 0; 
	int stop = 19;
	while(multiples < stop)
	{
		counter++;
		if(counter % 15 != 0)
		{
			continue;
		}
		std::cout << counter << " ";
		multiples++;

		
		
	}
	std::cout << std::endl;
	return 0;
}
