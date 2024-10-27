#include <iostream>
#include <cstdio>

float convert(float);

int main()
{
    float fahrenheit;
    float celsius;
    
    printf("\nEnter fahrenheit temprature:");
    std::cin >> fahrenheit;
    celsius = convert(fahrenheit);
    printf("Your %f fahrenheit temperature is %f in celsius",fahrenheit,celsius);
    return 0;
}

float convert(float f)
{
    return ((f-32) * 5)/9;
}