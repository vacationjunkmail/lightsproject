#include <iostream>
#include <string>
#include "user.h"

		int User::get_user_count()
		{
			return user_count;		
		}
		
		
		std::string User::get_status()
		{
			return status;
		}

		
		void User::set_status(std::string status)
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

		User::User()
		{
			user_count++;
		}

		//Default constructor is always called.
		User::User(std::string first_name,std::string last_name,std::string status)
		{
			//first name of object = argument being passed in
			this->first_name = first_name;
			this->last_name = last_name;
			this->status = status;
			user_count++;
		}

		//Destructor
		User::~User()
		{
			user_count--;
		}
		//friend void output_status(User user);
		std::ostream& operator << (std::ostream& output, const User user);
		std::istream& operator >> (std::istream &input, User &user);
		


//static member has to be assigned outside of class
int User::user_count = 0;
		
std::ostream& operator << (std::ostream& output,const User user)
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
