#include <iostream>
#include <string>
//https://youtu.be/_bYFu9mBnr4
//https://www.youtube.com/watch?v=_bYFu9mBnr4&t=8460s
int main()
{
	/*int guesses[20];
	guesses[0]=1;
	std::cout << guesses[0] << std::endl;
	std::cin >> guesses[0];
	std::cout << guesses[0] << std::endl;
	*/

	/*
	int guesses[] = {10,13,54,42,12,12,13};
	std::cout << guesses[3] << std::endl;
	guesses[3]=500;
	std::cout << guesses[3] << std::endl;
	*/
	int guesses[] = {12,43,26,43,23};
	int num_elements = 5;
	//sizeof retuns the number of bytes not the actual size.  
	//to get the size (number of  elements in the array)  you have to divide by one of the elements.  Hence below
	int size = sizeof(guesses)/sizeof(guesses[0]);
	std::cout << size << std::endl;

	for(int i=0; i < size; i++)
	{
		std::cout << guesses[i] << std::endl;
	}
	return 0;
}
