#include <iostream>

int main()
{
    char grade;

    std::cout << "Enter the Grade: ";
    std::cin >> grade;

    switch (toupper(grade))
    {
        case 'A':
            std::cout << "Highest Grade\n";
            break;
        case 'B':
            std::cout << "You can do better\n";
            break;
        case 'C':
            std::cout << "You are average\n";
            break;
        case 'D':
            std::cout << "Just about failure\n";
            break;
        case 'F':
            std::cout << "You failed\n";
            break;
        default:
            std::cout << "This is not a grade\n";
            break;
    }
    return 0;
}
