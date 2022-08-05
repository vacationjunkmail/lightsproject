#include <iostream>
#include <vector>

int main()
{
	std::vector<int> data = {6,5,4};
	data.push_back(5);
	std::cout << "Size of vector data: "<<data.size() << std::endl;
	for(int i=0;i<data.size();i++)
	{
		std::cout<<"position:"<<i<< " value: "<<data[i]<<std::endl;
	}
	//removes last element of the vector
	data.pop_back();
	std::cout << "Size of vector data: "<<data[data.size()-1] << std::endl;
	std::cout <<"last element of array: "<< data[data.size()-1]<< std::endl;
	std::cout <<"last element of array: "<< data.back()<< std::endl;
	std::cout<<"first element of vector: "<< data.front()<<std::endl;

}

