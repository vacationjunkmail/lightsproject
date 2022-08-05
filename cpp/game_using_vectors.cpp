#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

void print_vector(std::vector<int> vector)
{
	for(int i =0;i<vector.size();i++)
	{
		std::cout<< vector[i] << "\t";
	}
	std::cout << "\nYou took " << vector.size()<<" attempts to get the correct guess"<<std::endl;
}


void play_game()
{
	int random_int = rand() % 251;
	std::cout << "Guess the number:\n";
	std::vector<int> guesses;

	while(true)
	{
		int guess;
		std::cin >> guess;
		guesses.push_back(guess);
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
	print_vector(guesses);
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
