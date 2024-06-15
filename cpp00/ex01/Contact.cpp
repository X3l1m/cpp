#include "Contact.hpp"

std::string Contact::getFirstName(void) const
{
	return firstName;
}

std::string Contact::getLastName(void) const
{
	return lastName;
}

std::string Contact::getNickName(void) const
{
	return nickName;
}

std::string Contact::getPhoneNum(void) const
{
	return phoneNum;
}

std::string Contact::getSecret(void) const
{
	return secret;
}

std::string getInput();
bool isAllNum(std::string str);
bool isAllAlpha(std::string str);

void Contact::setFirstName(void)
{
	bool isAlpha = false;
	std::cout << "Enter first name: ";
	do {
		firstName = getInput();
		isAlpha = isAllAlpha(firstName);
		if (!isAlpha)
			std::cout << "A first name can only contain letters!" << std::endl << ": ";
	} while (!isAlpha);
}

void Contact::setLastName(void)
{
	bool isAlpha = false;
	std::cout << "Enter last name: ";
	do {
		lastName = getInput();
		isAlpha = isAllAlpha(lastName);
		if (!isAlpha)
			std::cout << "A last name can only contain letters!" << std::endl << ": ";
	} while (!isAlpha);
}

void Contact::setNickName(void)
{
	std::cout << "Enter nickname: ";
	nickName = getInput();

void Contact::setPhoneNum(void)
{
	bool isNum = false;
	std::cout << "Enter phone number: ";
	do {
		phoneNum = getInput();
		if (phoneNum.size() > 15)
			std::cout << "A phone number can be a maximum of 15 characters!" << std::endl << ": ";
		isNum = isAllNum(phoneNum);
		if (!isNum)
			std::cout << "A phone number can only contain numbers!" << std::endl << ": ";
	} while (phoneNum.size() > 15 || !isNum);
}

void Contact::setSecret(void)
{
	std::cout << "Enter darkest secret: ";
	secret = getInput();
}
