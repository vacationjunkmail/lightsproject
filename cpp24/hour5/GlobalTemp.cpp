#include <iostream>
#include <cstdio>
// Example of using global variables.
// compare to Temperature.cpp

void convert();

float fahrenheit;
float celsius;

int main()
{
    
    printf("\nEnter fahrenheit temprature:");
    std::cin >> fahrenheit;
    convert();
    printf("Your %f fahrenheit temperature is %f in celsius",fahrenheit,celsius);
    return 0;
}

void convert()
{
    celsius = ((fahrenheit-32) * 5)/9;
}
