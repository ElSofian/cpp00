#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

Contact::Contact(std::string fname, std::string lname, std::string nname, std::string pnumber, std::string dsecret) {
	this->first_name = fname;
	this->last_name = lname;
	this->nickname = nname;
	this->phone_number = pnumber;
	this->darkest_secret = dsecret;
}

void		Contact::setFirstName(std::string first_name) {
	this->first_name = first_name;
}
void		Contact::setLastName(std::string last_name) {
	this->last_name = last_name;
}
void		Contact::setNickname(std::string nickname) {
	this->nickname = nickname;
}
void		Contact::setPhoneNumber(std::string phone_number) {
	this->phone_number = phone_number;
}
void		Contact::setDarkestSecret(std::string darkest_secret) {
	this->darkest_secret = darkest_secret;
}
std::string	Contact::getContactInfo(int code) {
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
