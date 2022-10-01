#include <iostream>

int main()
{
    char name[50];
    char name_question[22]= "\nWhat is your name? ";

    char quest[80];
    char velosity[80];


    std::cout << name_question;
    std::cin.getline(name,49);

    std::cout << "\nWhat is your quest? ";
    std::cin.getline(quest,79);

    std::cout << "\nWhat is the velocity of a swallow? ";
    std::cin.getline(velosity,79);

    std::cout << "\nName: " << name << "\n";
    std::cout << "Quest: " << quest << "\n";
    std::cout << "Velocity: " << velosity << std::endl;
    return 0;
}
