#include <iostream>
#include <string>
#include "user.h"
#include "teacher.h"
#include "student.h"

void do_something(User& user)
{
	user.output();
}

int main()
{

	//Teacher is still considered a User
	Teacher teacher;
	Student student;
	//Reference to user since teacher inherits from user this will work
	User& t = teacher;
	//t.output();
	User& s = student;
	//s.output();
	do_something(s);
	do_something(t);
}
