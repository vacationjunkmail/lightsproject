#include <iostream>

int main()
{
    int number;
    std::cout << "Enter a Number: ";
    std::cin >> number;
    std::cout << "\nFirst 10 multiples of " << number << "\n";

    for(int counter = 1; counter < 11; counter++)
    {
        std::cout << number * counter << " ";
    }
    std::cout << std::endl;
    return 0;
}
