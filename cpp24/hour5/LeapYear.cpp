#include <iostream>
#include <cstdio>

bool isLeapYear(int year);

int main()
{
    int input;
    std::cout << "Enter a year:";
    std::cin >> input;
    
    if (isLeapYear(input))
    {
        printf("\n%d is a leap year.\n",input);
    }
    else
    {
        printf("\n%d is not a leap year.\n",input);
    }
    
    return 0;
}

bool isLeapYear(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return true;
            }
            else 
            {
                return false;
            }
        }
        else
        {
            return true;
        }
    }
    else 
    {
        return false; 
    }
}
