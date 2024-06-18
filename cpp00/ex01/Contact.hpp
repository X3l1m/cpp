/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/14 17:20:24 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/14 17:20:24 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

#define C_RED "\e[0;31m"
#define C_GRN "\e[0;32m"
#define C_YEL "\e[0;33m"
#define C_BLU "\e[0;34m"
#define C_MAG "\e[0;35m"
#define C_CYN "\e[0;36m"
#define C_RST "\e[0m"

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNum;
	std::string secret;

public:
	void setFirstName();
	void setLastName();
	void setNickName();
	void setPhoneNum();
	void setSecret();
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNum() const;
	std::string getSecret() const;
};

std::string getInput();
bool isAllNum(std::string str);
bool isAllAlpha(std::string str);

#endif