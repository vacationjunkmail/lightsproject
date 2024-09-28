#include <iostream>
#include <string>

enum sizeOF {
	INT = sizeof(int),
	SHORT = sizeof(short),
	LONG = sizeof(long),
	CHAR = sizeof(char),
	BOOL = sizeof(bool),
	FLOAT = sizeof(float),
	DOUBLE = sizeof(double),
	LONGLONG = sizeof(long long int)
};

void sizeOfFunction(int value, std::string msg = "Default:") {
	std::cout << msg << value << " bytes\n";
}
	
int main()
{
	sizeOfFunction(sizeOF::INT,"The size of an interger:");
	sizeOfFunction(sizeOF::SHORT,"The size of a short interger:");
	sizeOfFunction(sizeOF::LONG,"The size of a long interger:");
	sizeOfFunction(sizeOF::CHAR,"The size of a character:");
	sizeOfFunction(sizeOF::BOOL,"The size of a boolen:");
	sizeOfFunction(sizeOF::FLOAT,"The size of a float:");
	sizeOfFunction(sizeOF::DOUBLE,"The size of a double:");
	sizeOfFunction(sizeOF::LONGLONG,"The size of a long long int:");
	return 0;
}
