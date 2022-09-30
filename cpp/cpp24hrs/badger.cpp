#include <iostream>

int main()
{
    int badger;
    std::cout<<"How many Badgers:";
    std::cin>>badger;

    do{
        std::cout <<"Badger: " << badger << "\n";
        badger--;
    } while (badger > 0);
    std::cout << std::endl;
    return 0;
}
