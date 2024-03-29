#include <iostream>
#include <vector>

//classes private by default 
class User
{
	static int user_count;
	std::string status = "Gold";
	
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
				this->status = "Not recognized but the status is-> "+status;
			}
		}

		//Default constructor is always called.
		User()
		{
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
		//friend void output_status(User user);
		friend std::ostream& operator << (std::ostream& output, User user);
		friend std::istream& operator >> (std::istream &input, User &user);
		
};



//static member has to be assigned outside of class
int User::user_count = 0;
		
std::ostream& operator << (std::ostream& output,User user)
{
	output << "First name: "<< user.first_name<< "\nLast name: "<< user.last_name << "\nStatus: "<< user.status;
	//can call getter functions here. Instead of making a friend function user.get_status() or user.set_status("haha")
	
	return output;
	
}

std::istream& operator >> (std::istream &input, User &user)
{

	input >> user.first_name >> user.last_name >> user.status;
	return input;
	
}

int main()
{
	
	User user;
	//user.first_name="Bob";
	//user.last_name="jones";
	//user.set_status("pink");
	std::cin >> user;
	std::cout << user << std::endl;
	return 0;
}
