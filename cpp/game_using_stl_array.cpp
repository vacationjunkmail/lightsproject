#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <array>

void print_stl_array(std::array<int,251> stl_array,int c)
{
	for(int i =0;i<c;i++)
	{
		std::cout<< stl_array[i] << "\t";
	}
	std::cout << "\nYou took " << c<<" attempts to get the correct guess"<<std::endl;
}


void play_game()
{
	int random_int = rand() % 251;
	std::cout << "Guess the number:\n";
	std::array<int,251> guesses;
	int count = 0;

	while(true)
	{
		int guess;
		std::cin >> guess;
		guesses[count++] = guess;
		if(guess == random_int)
		{
			std::cout << "you guessed correct" << std::endl;
			break;
		}
		else if (guess < random_int)
		{
			std::cout << "Too low:\n";
		}
		else 
		{
			std::cout << "To high:\n";
		}
	}
	print_stl_array(guesses,count);
}

int main()
{
	srand(time(NULL));//seed the random number so random number changes every time.
	//random_int gets the clocks time
	int choice;
	std::string greeting = "Hello";
	do
	{
		std::cout << "0. Quit\n" << "1. Play Game\n";
		std::cin >> choice;

		switch(choice)
		{
			case 0:
				std::cout << "You quit the game\n";
				return 0;
			case 1:
				play_game();
				break;
		}
	}while(choice !=0);
}
