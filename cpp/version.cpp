#include <iostream>
using namespace std;

// main() is where program execution begins.
int main() {
    std::string version ="\nVersion: ";
    if (__cplusplus == 201703L) 
    {
        std::cout << version << "C++17\n";
    }
    else if (__cplusplus == 201402L)
    {
         std::cout << version << "C++14\n";
    }
    else if (__cplusplus == 201103L)
    {
         std::cout << version << "C++11\n";
    }
    else if (__cplusplus == 199711L)
    {
         std::cout << version << "C++98\n";
    }
    else { 
        std::cout << "pre-standard C++ or check online";
    	std::cout << " to see what version ";
    	std::cout << __cplusplus <<" resolves to.\n";
    }
    std::cout<< std::endl;   
    return 0;
}
