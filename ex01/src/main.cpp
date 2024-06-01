#include "phonebook.hpp"

void	Phonebook::add(void)
{
	Contact	contact;

	std::cout << "👨‍🦲 First name: ";
	std::getline(std::cin, contact.first_name);
	std::cout << "👨‍🦲 Last name: ";
	std::getline(std::cin, contact.last_name);
	std::cout << "🤝 Nickname: ";
	std::getline(std::cin, contact.nickname);
	std::cout << "📱 Phone number: ";
	std::getline(std::cin, contact.phone_number);
	std::cout << "🕵️‍♂️ Darkest secret: ";
	std::getline(std::cin, contact.darkest_secret);

	contacts.push_back(contact);
}

void	Phonebook::search(const Phonebook &phonebook) const
{
	std::string	output;
	int index;

	std::cout << '\n' << "|  INDEX   |FIRST NAME|LAST NAME |NICK NAME |" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (size_t i = 0; i < phonebook.contacts.size(); ++i)
	{
		std::cout << "|";
		std::cout << std::setw(10) << std::right << i << "|";
		print(phonebook.contacts[i].first_name);
		std::cout << "|";
		print(phonebook.contacts[i].last_name);
		std::cout << "|";
		print(phonebook.contacts[i].nickname);
		std::cout << "|" << std::endl;
	}
	std::cout << '\n' << "🔍 Enter the index of the contact: ";
	std::getline(std::cin, output);
	std::cout << '\n';
	if (output.empty() || output.length() > 1)
		return ;
	for (size_t i = 0; i < output.length(); i++)
		if (!std::isdigit(output[i])) return ;
	index = stringToInt(output);
	if (index >= 0 && index < static_cast<int>(phonebook.contacts.size()))
	{
		std::cout << "🗒️ Contact:" << std::endl;
		std::cout << "👨‍🦲 First name: " << phonebook.contacts[index].first_name << std::endl;
		std::cout << "👨‍🦲 Last name: " << phonebook.contacts[index].last_name << std::endl;
		std::cout << "🤝 Nickname: " << phonebook.contacts[index].nickname << std::endl;
		std::cout << "📱 Phone number: " << phonebook.contacts[index].phone_number << std::endl;
		std::cout << "🕵️‍♂️ Darkest secret: " << phonebook.contacts[index].darkest_secret << std::endl;
	}
	else
		std::cout << "Invalid index." << std::endl;
}

int	main(void)
{
	Phonebook	phonebook;
	std::string	output;

	while (1)
	{
		std::cout << "📞 Phonebook: ";
		std::getline(std::cin, output);
		if (output == "ADD")
			phonebook.add();
		else if (output == "SEARCH")
			phonebook.search(phonebook);
		else if (output == "EXIT")
			return (0);
		if (output == "SEARCH" || output == "EXIT" || output == "ADD")
			std::cout << std::endl;
	}
	return (0);
}