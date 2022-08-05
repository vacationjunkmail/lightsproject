#include <iostream>
#include <vector>

void print_vector(std::vector<int> &data)
{
	//changes to this vector does not change the main vector unless you add &data to pass by reference
	//pass by reference if you want to change the value
	//pass by value if you do not want to change.  if the vector is huge then you should probably pass by reference for memory reasons.  However do not update the vecto if that will effect anything.
	data.push_back(3);
	for(int i=0; i<data.size();i++)
	{
		std::cout<<data[i]<<"\t";
	}
	std::cout<<std::endl;
}

int main()
{
	std::vector<int> data = {6,5,4};
	print_vector(data);
	print_vector(data);
	print_vector(data);
}

