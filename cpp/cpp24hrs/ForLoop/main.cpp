#include <iostream>

int main()
{
    int production[] = {1999,2000,2001,2002,2003,2004};
    for(int year : production){
        std::cout << "New for loop style in C++: "<< year << "\n";
    }
    const int production_size = sizeof(production)/sizeof(production[0]);
    std::cout << production_size << std::endl;
    for(int i = 0; i < production_size; i++ )
    {
        std::cout << "Old for loop style in C++: " << production[i] << "\n";
    }
    //std::cout << std::endl;
    return 0;
}
