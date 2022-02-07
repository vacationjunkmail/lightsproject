#include <iostream>
#include <string>

int main()
{
	std::string greeting = "Hello";
	int answer = 11;
	std::cout << "Guess the number:";
	int guess;
	std::cin >> guess;

	//int points = guess == answer ? 10 : 0;
	//std::cout << points << std::endl;
	guess == answer ? std::cout << "You guessed correct!\n" : std::cout << "Try again buddy!\n";
}
