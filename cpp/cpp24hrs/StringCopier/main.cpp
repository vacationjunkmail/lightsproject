#include <iostream>

#include <cstring>

int main()
{
    char string1[] = "From the bound periodicals!";
    char string2[80];

    strcpy(string2,string1);

    std::cout << "String1: " << string1 << "\n";
    std::cout << "String2: " << string2 << "\n";

    return 0;
}
