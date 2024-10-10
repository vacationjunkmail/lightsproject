#include <cstdio>


int main() 
{
	int year = 2016;
	printf("Prefix operator:++<variable>\n");
	for(int i=0; i<3; i++)
	{
		printf("Year:%d\n",++year);
	}
	printf("\nThe current year after the loop:%d\n\n",year);
	printf("\nPostfix operator:<variable>++\n");
	for(int i=0; i<3; i++)
	{
		printf("Year:%d\n",year++);
	}	
	return 0;
}

