/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 18:35:45 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/29 18:35:45 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{ 
	std::cout << "Dog default constructor called" << std::endl;
	brain = new Brain();
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &copy)
	{
		Animal::operator=(copy);
		brain = new Brain(*copy.getBrain());
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Brain* Dog::getBrain() const
{
	return brain;
}