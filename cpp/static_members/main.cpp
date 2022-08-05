#include <iostream>
#include <vector>

//classes private by default 
class User
{
	std::string status = "Gold";

	static int user_count;

	public:
		static int get_user_count()
		{
			return user_count;		
		}
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
			//std::cout<<"In the constructor"<<std::endl;
			user_count++;
		}

		User(std::string first_name,std::string last_name)
		{
			//first name of object = argument being passed in
			this->first_name = first_name;
			this->last_name = last_name;
			user_count++;
		}

		//Destructor
		~User()
		{
			//std::cout << "Destructor\n";
			user_count--;
		}

};

//static member has to be assigned outside of class
int User::user_count = 0;

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
	//each time the user is called the static user count increases
	User user,user1,user2,user3,user4;
	user.set_status("Gold");
	std::cout<< user.get_status()<<std::endl;
	std::cout<<User::get_user_count()<<std::endl;
	//calling destructor
	user.~User();
	std::cout << User::get_user_count() << std::endl;
	return 0;
}
