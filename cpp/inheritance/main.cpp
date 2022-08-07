#include <iostream>
#include <string>
#include "user.h"
#include "teacher.h"

int main()
{
	/*
	User user;
	std::cin >> user;
	std::cout << user << std::endl;

	Teacher teacher;
	teacher.first_name = "Teacher first name";
	std::cout << teacher.first_name << std::endl;
	teacher.output();
	*/
	
	//User constructer comes before teacher constructor.
	//Teacher inherits from User so naturally User constructor will be seen first
	//a User is created or called even if not explicit because teacher inherits from user
	Teacher teacher;
}
