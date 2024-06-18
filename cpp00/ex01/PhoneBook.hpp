/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/18 15:29:27 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/18 15:29:27 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
	Contact contacts[8];

	public:
	void search() const;
	bool initContact(int i);
};

#endif