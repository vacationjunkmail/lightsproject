#include <iostream>

//classes private by default 
class User
{
	std::string status = "Blue";

	public:
		std::string get_status()
		{
			return status;
		}
		std::string first_name;
		std::string last_name;
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
