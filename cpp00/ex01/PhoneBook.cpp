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
	std::cout << "Enter index: ";
	do {
		std::cin >> s;
		std::cout << std::endl;
		if (std::cin.eof())
			exit(1);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			std::cout << "Please enter a number: ";
		}
		if (s < 1 || s > 8)
			std::cout << "Please enter a number between 1 and 8: ";
	} while (s < 1 || s > 8);
	std::cout << "First Name:	" << contacts[s].getFirstName() << std::endl;
	std::cout << "Last Name:	" << contacts[s].getLastName() << std::endl;
	std::cout << "Nickname:	" << contacts[s].getNickName() << std::endl;
	std::cout << "Phone Number:	" << contacts[s].getPhoneNum() << std::endl;
	std::cout << "Secret:		" << contacts[s].getSecret() << std::endl;
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
