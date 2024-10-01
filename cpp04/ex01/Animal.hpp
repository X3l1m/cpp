/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 18:35:26 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/29 18:35:26 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		virtual ~Animal();
		Animal(std::string type);
		Animal(const Animal& copy);
		Animal& operator=(const Animal& copy);
//member functions
		std::string getType() const;
		virtual void makeSound() const;
};


#endif