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
#include <algorithm>
#include <cctype>

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
};;

#endif