#include <iostream>
#include <string>


void print(std::string type,int pnum)
{
	std::cout << "data type is "<< type <<":"<< pnum << std::endl;
}

void convert_print(std::string type,int cnum)
{
	/*
		needed because std::hex and std::oct are manipulators
		and they change std::cout behavior
		https://www.oreilly.com/library/view/mastering-the-c17/9781787126824/7c9b327c-03fe-4d95-94cd-3539b4d020da.xhtml
	*/
	std::cout << cnum << " is represented as ";
	std::ios old_state(nullptr);
	old_state.copyfmt(std::cout);
	if(type == "oct"){
		std::cout << std::oct << cnum;
		std::cout.copyfmt(old_state);
		std::cout << " in "+type << std::endl;
	}
	else if(type == "hex")
	{
		std::cout << std::hex << cnum;
		std::cout.copyfmt(old_state);
		std::cout << " in "+type << std::endl;
	}
}

int main()
{
	//base10 
	int num = 30;
	//print("base10",num);
	//int hex_num = 0x30; //base16 0 to 15
	//print("hex",hex_num); //16x3=48
	convert_print("hex",num);
	//int oct_num = 030;//base8 0 to 7
	//print("oct",oct_num);//3x8=24 study up on octal and hexidecimal
	convert_print("oct",num);

}
