//#include <iostream>

#include <cstdio>

int main()
{
	// printf example
	// https://www.programiz.com/cpp-programming/library-function/cstdio/printf
	int x = 12, y= 42, z = 88;
	char preMsg[] = "Before"; 	// String using old method
								//can't use std::string <variable> = "<whatever>"
	char postMsg[] = "After";
	
	printf("%s\n\tx:%d y:%d z:%d\n",preMsg,x,y,z);
	z = x = y + 13;
	printf("%s\n\tx:%d y:%d z:%d\n",postMsg,x,y,z);
	
	
	return 0;
}
