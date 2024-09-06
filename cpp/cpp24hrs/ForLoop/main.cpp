#include <iostream>
#include <cstdio>

//https://www.geeksforgeeks.org/cpp-cstdio/
//https://www.geeksforgeeks.org/cpp-printf-function/

int main()
{
    int production[] = {1999,2000,2001,2002,2003,2004};
    for(int year : production){
        std::cout << "New for loop style in C++: "<< year << "\n";
        // std::printf("\tPrint printf: %d\n", production[i]);
    }


    const int production_size = sizeof(production)/sizeof(production[0]);
    std::cout << "\nSize of production array:" << production_size << std::endl;
    for(int i = 0; i < production_size; i++ )
    {
        std::cout << "Old for loop style in C++: " << production[i] << "\n";
    }
    //std::cout << std::endl;

    std::cout << "\nUsing printf" << "\n";
    for(int i = 0; i < production_size; i++ )
    {
        std::printf("\tOld for loopy style using printf: %d\n", production[i]);
    }

    return 0;
}
