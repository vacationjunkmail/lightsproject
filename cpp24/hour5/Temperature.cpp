#include <iostream>
#include <cstdio>

float convert(float);

int main()
{
    float fahrenheit;
    float celsius;
    
    printf("\nEnter fahrenheit temperture:");
    std::cin >> fahrenheit;
    celsius = convert(fahrenheit);
    printf("Your %f fahrenheit temperture is %f in celsius",fahrenheit,celsius);
    return 0;
}

float convert(float f)
{
    return ((f-32) * 5)/9;
}
