#include <iostream>
#include <cstdio>

int main()
{
	int grade;
	printf("Enter a grade (1-100):\n");
	std::cin>> grade;
	
	if (grade >= 70)
	{
        if(grade >= 90)
        {
            printf("\nYou got an A. Great job!");
            return 0;
        }
        if(grade >= 80)
        {
            printf("\nYou got an B. Good job!");
            return 0;
        }        
		printf("You passed with a %d%%\n",grade);
	}
	else
	{
		printf("%d%% is a failing grade. Aka an F\n",grade);
	}
	return 0;
}
