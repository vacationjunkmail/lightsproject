#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void print_array(int array[],int count)
{
	std::cout<<"Your guesses: ";
	for(int i =0;i<count;i++)
	{
		std::cout<< array[i] << "\t";
	}
	std::cout <<"\nFor a total of "<<count<<" guesses."<< std::endl;
}


void play_game()
{
	int random_int = rand() % 251;
	std::cout << "Guess the number:\n";
	int number_of_tries =1;
	int guesses[250];
	int guess_count=0;

	while(true)
	{
		int guess;
		std::cin >> guess;
		guesses[guess_count++] = guess;
		if(guess == random_int)
		{
			std::cout << "you guessed correct" << std::endl;
			std::cout << "You took "<<number_of_tries<<" tries!"<<std::endl;
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
		number_of_tries++;
	}
	print_array(guesses,number_of_tries);
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
