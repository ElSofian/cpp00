#include "phonebook.hpp"

void	Phonebook::add(Phonebook &phonebook)
{
	std::string	value;
	Contact	contact;
	
	std::cout << "👨‍🦲 First name: ";
	std::getline(std::cin, value);
	contact.setFirstName(value);
	std::cout << "👨‍🦲 Last name: ";
	std::getline(std::cin, value);
	contact.setLastName(value);
	std::cout << "🤝 Nickname: ";
	std::getline(std::cin, value);
	contact.setNickname(value);
	std::cout << "📱 Phone number: ";
	std::getline(std::cin, value);
	contact.setPhoneNumber(value);
	std::cout << "🕵️‍♂️ Darkest secret: ";
	std::getline(std::cin, value);
	contact.setDarkestSecret(value);

	if (phonebook.getIndex() > 7)
		phonebook.increaseIndex();
	phonebook.contacts[phonebook.getIndex()] = contact;
    	phonebook.increaseIndex();
    	phonebook.increaseSize();
}

void	Phonebook::search(Phonebook &phonebook)
{
	std::string	output;
	int index;

	std::cout << '\n' << "|  INDEX   |FIRST NAME|LAST NAME |NICK NAME |" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (int i = 0; i <= phonebook.getSize() - 1; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << std::right << i << "|";
		print(phonebook.contacts[i].getContactInfo(FIRST_NAME));
		std::cout << "|";
		print(phonebook.contacts[i].getContactInfo(LAST_NAME));
		std::cout << "|";
		print(phonebook.contacts[i].getContactInfo(NICKNAME));
		std::cout << "|" << std::endl;
	}
	if (phonebook.getSize() == 0)
		return ;
	std::cout << '\n' << "🔍 Enter the index of the contact: ";
	std::getline(std::cin, output);
	std::cout << '\n';
	for (size_t i = 0; i < output.length(); i++)
		if (!std::isdigit(output[i])) return ;
	index = stringToInt(output);
	if (index >= 0 && index < phonebook.getSize())
	{
		std::cout << "🗒️  - Contact:" << std::endl;
		std::cout << "👨‍🦲 First name: " << phonebook.contacts[index].getContactInfo(FIRST_NAME) << std::endl;
		std::cout << "👨‍🦲 Last name: " << phonebook.contacts[index].getContactInfo(LAST_NAME) << std::endl;
		std::cout << "🤝 Nickname: " << phonebook.contacts[index].getContactInfo(NICKNAME) << std::endl;
		std::cout << "📱 Phone number: " << phonebook.contacts[index].getContactInfo(PHONE_NUMBER) << std::endl;
		std::cout << "🕵️‍♂️ Darkest secret: " << phonebook.contacts[index].getContactInfo(DARKEST_SECRET) << std::endl;
	}
	else
		std::cout << "Invalid index." << std::endl;
}

int	main(void)
{
	Phonebook	phonebook(0, 0);
	std::string	output;

	while (1)
	{
		std::cout << "📞 Phonebook: ";
		std::getline(std::cin, output);
		if (output == "ADD")
			phonebook.add(phonebook);
		else if (output == "SEARCH")
			phonebook.search(phonebook);
		else if (output == "EXIT")
			return (0);
		if (output == "SEARCH" || output == "EXIT" || output == "ADD")
			std::cout << std::endl;
	}
	return (0);
}