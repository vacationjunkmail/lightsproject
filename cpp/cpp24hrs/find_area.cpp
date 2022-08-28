#include <iostream>
#include <time.h>

int findArea(int length, int width = 20, int height = 12);

int main()
{

	int length = 100;
	int width  = 50;
	int height = 2;
	int area;
	
	area = findArea(length,width,height);
	std::cout << "All sent in: "<< area << "\n";

	area = findArea(length,width);
	std::cout << "Length and width sent in: "<< area << "\n";
	
	area = findArea(length);
	std::cout << "Just the length sent in: "<< area << "\n";
		
	return 0;	
}

int findArea(int length, int width, int height)
{
		return (length * width * height);
}
