#include <iostream>

int average(int a, int b);
long average(long a, long b);
float average(float a, float b);

int main()
{

	int val1 = 6;
	int val2 = 100;
	std::cout << "Int average: " << average(val1,val2) << "\n";
	
	long val3 = 10000000;
	long val4 = 50000;
	std::cout << "long average: " << average(val3,val4) << "\n";
	
	float val5 = 60.33;
	float val6 = 3.33;
	
	std::cout << "float average: "<< average(val5,val6) << std::endl;
}


int average(int one, int two)
{
	return (one+two)/2;	
}

long average(long one, long two)
{
	return (one+two)/2;	
}

float average(float one, float two)
{
	return (one+two)/2;
}
