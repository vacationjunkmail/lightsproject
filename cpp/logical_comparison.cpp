#include <iostream>
#include <string>

int main()
{
	std:: string answer = "Dana";
	int age_answer = 40;
	std::string guess;
	std::cout << "Guess my namex: ";
	std::cin >> guess;

	int age_guess;
	std::cout << "Guess my age: ";
	std::cin >> age_guess;

	if(guess == answer && age_guess == age_answer)
	{
		std::cout << "You got my name right!" << std::endl;
	}
	else
	{
		std::cout << "Wrong better luck next time :(" << std::endl;
	}
}
