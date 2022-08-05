#include <iostream>
#include <vector>

//making array that doesn't change data in the function.  use const
//arrays can be modified inside of functions so using const would prevent that
void print_array(const int data[], int size)
{
	for(int i=0;i<size;i++)
	{
		std::cout<<data[i] << "\t";
	}
	std::cout<<"\n";
}

int main()
{
	int data[] = {1,2,3};
	print_array(data,3);
	std::cout<<data[0]<<std::endl;
	return 0;
}
