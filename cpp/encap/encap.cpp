#include <iostream>
#include <vector>

//classes private by default 
class User
{
	std::string status = "Blue";

	public:
		//getter
		std::string get_status()
		{
			return status;
		}
		std::string first_name;
		std::string last_name;


		//setter
		void set_status(std::string status)
		{
			if(status== "Gold" || status == "Silver" || status == "Bronze")
			{
				this->status = status;
			}
			else
			{
				this->status = "No medal";
			}
		}

		//Default constructor is always called.
		User()
		{
			std::cout<<"In the constructor"<<std::endl;
		}

		User(std::string first_name,std::string last_name)
		{
			//first name of object = argument being passed in
			this->first_name = first_name;
			this->last_name = last_name;
		}

};


int add_user(std::vector<User> &users, User user)
{
	for(int i = 0; i <users.size(); i++)
	{
		if(users[i].first_name == user.first_name && users[i].last_name == user.last_name)
		{
		
			return i;
		}
	}
	users.push_back(user);
	return users.size() -1;
}

int main()
{
	User user;
	user.set_status("Gold");
	std::cout<< user.get_status()<<std::endl;


	return 0;
}
