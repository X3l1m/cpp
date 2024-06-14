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
};

#endif