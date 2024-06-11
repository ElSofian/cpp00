#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

enum {
	FIRST_NAME,
	LAST_NAME,
	NICKNAME,
	PHONE_NUMBER,
	DARKEST_SECRET
};

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

	public:
		Contact(std::string fname, std::string lname, std::string nname, std::string pnumber, std::string dsecret);
		Contact();
		~Contact();

		void		setFirstName(std::string first_name);
		void		setLastName(std::string last_name);
		void		setNickname(std::string nickname);
		void		setPhoneNumber(std::string phone_number);
		void		setDarkestSecret(std::string darkest_secret);
		std::string	getContactInfo(int code);
};


#endif