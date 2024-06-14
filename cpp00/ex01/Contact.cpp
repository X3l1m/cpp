#include "Contact.hpp"

std::string Contact::getFirstName(void)
{
	std::cout << "name:" << firstName << std::endl;
	return firstName;
}

std::string Contact::getLastName(void)
{
	std::cout << "last name:" << lastName << std::endl;
	return lastName;
}

std::string Contact::getNickName(void)
{
	std::cout << "nickname:" << nickName << std::endl;
	return nickName;
}

std::string Contact::getPhoneNum(void)
{
	std::cout << "phone number:" << phoneNum << std::endl;
	return phoneNum;
}

std::string Contact::getSecret(void)
{
	std::cout << "darkest secret:" << secret << std::endl;
	return secret;
}



bool Contact::setFirstName(void)
{
	std::string str;
	std::cout << "Enter first name: ";
	std::getline(std::cin, firstName);
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