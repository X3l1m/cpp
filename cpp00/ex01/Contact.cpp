/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/18 15:29:00 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/18 15:29:00 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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

void Contact::setFirstName(void)
{
	bool isAlpha = false;
	std::cout << C_CYN << "Enter first name: " << C_RST;
	do {
		firstName = getInput();
		isAlpha = isAllAlpha(firstName);
		if (!isAlpha)
			std::cout << C_RED << "A first name can only contain letters!" << C_RST << std::endl << ": ";
	} while (!isAlpha);
}

void Contact::setLastName(void)
{
	bool isAlpha = false;
	std::cout << C_CYN << "Enter last name: " << C_RST;
	do {
		lastName = getInput();
		isAlpha = isAllAlpha(lastName);
		if (!isAlpha)
			std::cout << C_RED << "A last name can only contain letters!" << C_RST << std::endl << ": ";
	} while (!isAlpha);
}

void Contact::setNickName(void)
{
	std::cout << C_CYN << "Enter nickname: " << C_RST;
	nickName = getInput();
}

void Contact::setPhoneNum(void)
{
	bool isNum = false;
	std::cout << C_CYN << "Enter phone number: " << C_RST;
	do {
		phoneNum = getInput();
		isNum = isAllNum(phoneNum);
		if (!isNum)
			std::cout << C_RED << "A phone number can only contain numbers!" << C_RST << std::endl << ": ";
		else if (phoneNum.size() > 15)
			std::cout << C_RED << "A phone number can be a maximum of 15 characters!" << C_RST << std::endl << ": ";
	} while (phoneNum.size() > 15 || !isNum);
}

void Contact::setSecret(void)
{
	std::cout << C_CYN << "Enter darkest secret: " << C_RST;
	secret = getInput();
}
