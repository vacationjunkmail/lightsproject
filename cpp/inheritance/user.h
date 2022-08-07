#ifndef USER_H
#define USER_H

class User
{
	static int user_count;
	std::string status = "Gold";
	
	public:
		static int get_user_count();		
		std::string first_name;
		std::string last_name;
		//getter
		std::string get_status();

		//setter
		void set_status(std::string status);

		//Default constructor is always called.
		User();
		User(std::string first_name,std::string last_name,std::string status);
		//Destructor
		~User();
		friend std::ostream& operator << (std::ostream& output, const User user);
		friend std::istream& operator >> (std::istream &input, User &user);	
};
#endif
