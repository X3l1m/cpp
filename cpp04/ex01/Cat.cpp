/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 18:35:42 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/29 18:35:42 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	brain = new Brain();
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &copy)
	{
		Animal::operator=(copy);
		brain = new Brain(*copy.getBrain());
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

Brain* Cat::getBrain() const
{
	return brain;
}