#include <iostream>
#include <cstdio>

int findArea(int length, int width = 20, int height = 12);

int main()
{
    int length = 100;
    int width = 50;
    int height = 2;
    int area;
    
    area = findArea(length,width,height);
    printf("First area:%d\n",area);
    
    area = findArea(length,width);
    printf("Second area:%d\n",area);
    
    area = findArea(length,height);
    printf("Third area:%d\n",area);   
    
    area = findArea(length);
    printf("Fourth area:%d",area);   
    
    return 0;
}

int findArea(int length, int width, int height)
{

    return(length * width * height);
}
