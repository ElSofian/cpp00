#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <sstream>

void	print(std::string str);
int	stringToInt(const std::string &str);

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
		void		setFirstName(std::string first_name) {
			this->first_name = first_name;
		}
		void		setLastName(std::string last_name) {
			this->last_name = last_name;
		}
		void		setNickname(std::string nickname) {
			this->nickname = nickname;
		}
		void		setPhoneNumber(std::string phone_number) {
			this->phone_number = phone_number;
		}
		void		setDarkestSecret(std::string darkest_secret) {
			this->darkest_secret = darkest_secret;
		}
		std::string	getContactInfo(int code) {
			switch (code)
			{
				case FIRST_NAME:
					return this->first_name;
				case LAST_NAME:
					return this->last_name;
				case NICKNAME:
					return this->nickname;
				case PHONE_NUMBER:
					return this->phone_number;
				case DARKEST_SECRET:
					return this->darkest_secret;
			}
			return NULL;
		}
		Contact(std::string fname, std::string lname, std::string nname, std::string pnumber, std::string dsecret) {
			this->first_name = fname;
			this->last_name = lname;
			this->nickname = nname;
			this->phone_number = pnumber;
			this->darkest_secret = dsecret;
		}
		Contact() {}
		~Contact() {}
};

class Phonebook
{
	private:
		Contact	contacts[8];
		int		index;
		int		size;

	public:
		void	add(Phonebook &phonebook);
		void	search(Phonebook& phonebook);

		Phonebook(int index, int size) {
			this->index = index;
			this->size = size;
		}
		~Phonebook() {}
		void increaseIndex() {
			this->index++;
			if (this->index > 7)
				this->index = 0;
		}
		int getIndex() {
			return this->index;
		}
		void increaseSize() {
			if (size < 8)
				this->size++;
		}
		int getSize() {
			return this->size;
		}
};

#endif
