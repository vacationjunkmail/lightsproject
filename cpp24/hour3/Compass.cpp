#include <iostream>

int main()
{
	// set up enum
	enum Direction {North, Northeast, East, Southeast, South, Southwest, West, Northwest};
	// Create a variable to hold it
	Direction heading;
	heading = Southeast;
	
	std::cout << "Moving " << heading << std::endl;
	
	/*
		Call without variable
		std::cout << Direction::Southeast;
	*/
	return 0;
}
