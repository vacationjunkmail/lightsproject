#include <iostream>
#include <vector>
#include <array>

//ranged based for loop can be used with array,vector and stl array.
//ranged based for loop does not work in functions.  because regular arrays are passed by pointer instead of by vaue.
//if passing by pointer (&) with vector and stl array, ranged for will not work.  Have you pass by value.  This only applies to functions

int main()
{
	int data [] = {5,4,3,2,1,0};

	for(int i=0;i<sizeof(data)/sizeof(data[0]);i++)
	{
		std::cout<< data[i]<<"\t";
	}
	std::cout<<std::endl;

	//ranged based for loop
	std::cout<<"Ranged Based for loop: ";

	for(int n : data)
	{
		std::cout << n << "\t";
	}
	std::cout<<std::endl;


}
