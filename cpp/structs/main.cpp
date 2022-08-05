#include <iostream>

//stucts be default are public
struct User
{
	std::string get_status()
	{
		return status;
	}
	std::string first_name;
	std::string last_name;
	//std::string status;
	private:
		std::string status ="Red";
};


int main()
{
	User user;
	user.first_name="Dana";
	user.last_name="Wilson";

	std::cout << "First Name: "<< user.first_name<<std::endl;
	std::cout << "Last Name: "<< user.last_name<<std::endl;
	//std::cout << "Status: "<< user.status<<std::endl;
	std::cout << "Status: "<< user.get_status()<<std::endl;
	return 0;
}
