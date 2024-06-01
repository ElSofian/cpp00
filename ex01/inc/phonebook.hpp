#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <vector>
# include <iomanip>
# include <sstream>

void	print(std::string str);
int	stringToInt(const std::string &str);

class Contact
{
	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

class Phonebook
{
	public:
		void	add(void);
		void	search(const Phonebook& phonebook) const;
	private:
		std::vector<Contact>	contacts; // Correction ici
};

#endif
