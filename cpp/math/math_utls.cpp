#include "math_utls.h"

namespace utilz
{
	//Default argument
	double pow(double base, int pow)
	{
		int total =1;
		for(int i =0; i < pow; i++)
		{
			total *=base;
		}
		return total;

	}
}
