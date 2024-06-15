#include "PhoneBook.hpp"

std::string strTrunc(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(9);
		str += ".";
	}
	return str;
}

void PhoneBook::search() const
{
	int s = 0;
	std::cout << "                CONTCAT LIST" << std::endl;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|"; 
		std::cout << std::setw(10) << strTrunc(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << strTrunc(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << strTrunc(contacts[i].getNickName()) << std::endl;
	}
	s -= 1;
	if (s >= 0 && s <= 7)
	{
		contacts[s].getFirstName();
		contacts[s].getLastName();
		contacts[s].getNickName();
		contacts[s].getPhoneNum();
		contacts[s].getSecret();
	}
}

bool PhoneBook::add(int i)
{
	std::cout << "Adding contact" << std::endl;
	contacts[i].setFirstName();
	contacts[i].setLastName();
	contacts[i].setNickName();
	contacts[i].setPhoneNum();
	contacts[i].setSecret();
	std::cout << contacts[i].getFirstName() << " added to contact." << std::endl;
	return true;
}


