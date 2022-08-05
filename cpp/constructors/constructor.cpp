#include <iostream>
#include <vector>

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

		~User()
		{
			std::cout<<" Destructor"<<std::endl;
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
	std::vector<User> users;
	std::string lname ="Wilson";
	User user1,user2,user3,user4;
	user1.first_name="Dana";
	user1.last_name = lname;
	user2.first_name="Tiffany";
	user2.last_name=lname;
	user3.first_name="Alyssa";
	user3.last_name=lname;
	user4.first_name="Tianna";
	user4.last_name=lname;
	
	users.push_back(user1);
	users.push_back(user2);
	users.push_back(user3);
	users.push_back(user4);
	
	User new_user;
	new_user.first_name = "tianna";
	new_user.last_name = lname;

	std::cout<<add_user(users,new_user)<<std::endl;

	//Using custom constructor.  basically assigning variables.	
	User user("Frank","Jones");
	std::cout<<user.first_name<<" "<<user.last_name<<std::endl;

	//std::vector<User> users;
	//users.push_back(user);
	//can also be called like below but this creates the object over so it will clear the contents.
	//users.push_back(User());
	//std::cout << "First Name: "<< user.first_name<<std::endl;
	//std::cout << "First Name: "<< users[0].first_name<<std::endl;
	return 0;
}
