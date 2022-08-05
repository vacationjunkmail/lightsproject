#include <iostream>
#include <string>
//https://youtu.be/_bYFu9mBnr4
//https://www.youtube.com/watch?v=_bYFu9mBnr4&t=8460s

//passing an array to a function makes the array a pointer.
//have to do other things to get the size
void print_array(int array[],int size)
{
	for(int i=0;i<size;i++)
	{
		std::cout << array[i] << "\t";
	}
	std::cout << std::endl;

}

int main()
{
	
	int guesses[] = {12,43,26,43,23};
	std::cout << sizeof(guesses) << std::endl;
	int num_of_elements = sizeof(guesses)/sizeof(guesses[0]);
	print_array(guesses,num_of_elements);
	return 0;
}
