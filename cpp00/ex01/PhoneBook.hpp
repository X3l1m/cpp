#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
	Contact contacts[8];

	public:
	void search() const;
	bool add(int i);
};

#endif