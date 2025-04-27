/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 18:50:46 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/07 18:50:46 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &other) {
	(void)other;
}

Intern &Intern::operator=(const Intern &other) {
	(void)other;
	return *this;
}
Intern::~Intern() {}

AForm* Intern::makeForm(const std::string &name, const std::string &target) const
{
	std::string forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	try
	{
		int i;
		for (i = 0; i < 3 && forms[i] != name; i++);
		if (i != 3)
			std::cout << "Intern creates " << name << std::endl;
		switch (i)
		{
			case 0 : return new ShrubberyCreationForm(target);
			case 1 : return new RobotomyRequestForm(target);
			case 2 : return new PresidentialPardonForm(target);
		}
		throw FormDoesNotExistException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (NULL);
}

const char *Intern::FormDoesNotExistException::what() const noexcept {
	return "Form does not exist";
}