#include <iostream>
#include <cstdio>

int findArea(int length, int width);

int main()
{
    int length;
    int width;
    int area;
    
    printf("\nHow long is your yard?\n");
    std::cin >> length;
    printf("\nHow wide is your yard?\n");
    std::cin >> width;
    
    area = findArea(length,width);
    printf("\nYour yard is %d square feet.", area);
    return 0;
}
// function definiton
int findArea(int yardLength, int yardWidth)
{
    return yardLength * yardWidth;
}
