#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include "Contact.hpp"

void	print(std::string str);
int	stringToInt(const std::string &str);

class Phonebook
{
	private:
		Contact	contacts[8];
		int		index;
		int		size;

	public:
		void	add(Phonebook &phonebook);
		void	search(Phonebook& phonebook);

		Phonebook(int index, int size);
		~Phonebook();
		void increaseIndex();
		int getIndex();
		void increaseSize();
		int getSize();
};

#endif
