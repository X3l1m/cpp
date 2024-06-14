#include <iostream>
#include <string>

class Contact
{
	private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNum;
	std::string secret;
	public:
	bool setFirstName();
	bool setLastName();
	bool setNickName();
	bool setPhoneNum();
	bool setSecret();
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNum();
	std::string getSecret();
};;

class PhoneBook
{
	public:
	Contact contacts[8];
};

bool Contact::getFirstName(void)
{
	std::cout << "First name: " << firstName << std::endl;
	return true;
}

bool Contact::setFirstName(void)
{
	std::string str;
	std::cout << "Enter first name: ";
	std::getline(std::cin, str);
	firstName = str;
	return true;
}

bool Contact::setLastName(void)
{
	std::string str;
	std::cout << "Enter last name: ";
	std::getline(std::cin, str);
	lastName = str;
	return true;
}

bool Contact::setNickName(void)
{
	std::string str;
	std::cout << "Enter nickname: ";
	std::getline(std::cin, str);
	nickName = str;
	return true;
}

bool Contact::setPhoneNum(void)
{
	std::string str;
	std::cout << "Enter phone number: ";
	std::getline(std::cin, str);
	phoneNum = str;
	return true;
}

bool Contact::setSecret(void)
{
	std::string str;
	std::cout << "Enter	darkest secret: ";
	std::getline(std::cin, str);
	secret = str;
	return true;
}

bool Contact::setFirstName(void)
{
	Contact cont;
	std::string str;
	std::cout << "Enter first name: ";
	std::getline(std::cin, str);
	firstName = str;
}

int main(void)
{
	PhoneBook book;
	std::string input;

	while (1)
	{

		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "EOF detected\n";
			break;
		}
		if (input == "ADD")
		{
			std::cout << "Adding contact\n";
			book.contacts[0].setFirstName();
			book.contacts[0].getFirstName();
		}
		if (input == "SEARCH")
		{
			std::cout << "Searching contact\n";
		}
		if (input == "EXIT")
		{
			std::cout << "Exiting\n";
			break;
		}
		std::cin.clear();
	}
	return 0;
}
