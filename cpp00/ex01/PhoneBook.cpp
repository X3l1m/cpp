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

int indexCheck(std::string index)
{
	if (index.size() == 1 && std::isdigit(index[0]))
	{
		int in = index[0] - '0';
		if (in > 0 && in < 9)
			return in;
	}
	std::cout << C_RED << "Write a number between 1 and 8." << C_RST << std::endl << ": ";
	return 0;
}

void PhoneBook::search() const
{
	int in = 0;
	std::string index;

	std::cout << C_CYN << "                CONTCAT LIST" << std::endl;
	std::cout << "     Index|First Name| Last Name|  Nickname" << C_MAG << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|"; 
		std::cout << std::setw(10) << strTrunc(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << strTrunc(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << strTrunc(contacts[i].getNickName()) << std::endl;
	}
	std::cout << C_CYN << "Enter index: " << C_RST;
	do {
		index = getInput();
	} while (!(in = indexCheck(index)));
	in--;
	std::cout << C_MAG << "First Name:	" << C_RST << contacts[in].getFirstName() << std::endl;
	std::cout << C_MAG << "Last Name:	" << C_RST << contacts[in].getLastName() << std::endl;
	std::cout << C_MAG << "Nickname:	" << C_RST << contacts[in].getNickName() << std::endl;
	std::cout << C_MAG << "Phone Number:	" << C_RST << contacts[in].getPhoneNum() << std::endl;
	std::cout << C_MAG << "Secret:		" << C_RST << contacts[in].getSecret() << std::endl;
}

bool PhoneBook::initContact(int i)
{
	std::cout << C_GRN << "Adding contact" << C_RST << std::endl;
	contacts[i].setFirstName();
	contacts[i].setLastName();
	contacts[i].setNickName();
	contacts[i].setPhoneNum();
	contacts[i].setSecret();
	std::cout << C_GRN << contacts[i].getFirstName() << " added to contact." << C_RST << std::endl;
	return true;
}
