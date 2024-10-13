#include <iostream>
#include <cstdio>

int main()
{
	int grade;
	printf("Enter a grade (1-100):\n");
	std::cin>> grade;
	
	if (grade >= 70)
	{
		printf("You passed with a %d%%\n",grade);
	}
	else
	{
		printf("%d%% is a failing grade\n",grade);
	}
	return 0;
}
