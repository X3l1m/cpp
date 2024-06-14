#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
	Contact contacts[8];

	public:
	Contact& getContacts(int i){
		return contacts[i];
	}
};

#endif