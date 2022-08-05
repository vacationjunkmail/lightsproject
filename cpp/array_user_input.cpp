#include <iostream>
#include <string>
#include <limits>
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
	const int SIZE = 100;	
	int guesses[SIZE];
	int count = 0;
	for(int i = 0; i < SIZE;i++)
	{
		if(std::cin >> guesses[i])
		{
			count ++;
		}
		else
		{
			//invalid
			break;
		}
	}
	print_array(guesses,count);
	std::cin.clear();//clears cin.  Since the variable was not the correct type we need to clear cin.
	/*std.cin.ignore(1000,'\n'); 
	Not the best way to clear cin because it will only clear x amount of characters.*/
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	std::string Dana;
	std::cin >> Dana;
	std::cout<< Dana << std::endl;
	return 0;
}
