#include <iostream>

int main()
{
	/* 
		create a type definition
		an alias so you don't have to use `typedef unsigned short <keyword>`
		can simply use <keyword> <variable> = <whatever>;
	*/ 
	
	typedef unsigned short USHORT;
	USHORT width = 26,length = 40, area;
	area = width * length;
	
	std::cout << "width:" << width <<"\n";
	std::cout << "length:" << length <<"\n";
	std::cout << "area:" << area << "\n";	
}
