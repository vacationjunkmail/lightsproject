#include <iostream>
#include <array>



void print_stl_array(std::array<int,20> &data)
{
	for(int i=0;i<data.size();i++)
	{
		std::cout<<"Array value at index: "<< i<< ":"<<data[i]<<"\n";
	}
	std::cout<<std::endl;
}


//standard template libray arrays
int main()
{
	std::array<int,20> data = {1,2,3};
	print_stl_array(data);
}


