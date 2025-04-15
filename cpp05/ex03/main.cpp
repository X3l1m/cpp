/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 18:50:50 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/07 18:50:50 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern intern;
	AForm *form;

	std::cout << " : Shrubbery " << std::endl;
	form = intern.makeForm("ShrubberyCreationForm", "target1");
	delete form;
	std::cout << " : Robotomy " << std::endl;
	form = intern.makeForm("RobotomyRequestForm", "target2");
	delete form;
	std::cout << " : Presidential " << std::endl;
	form = intern.makeForm("PresidentialPardonForm", "target3");
	delete form;
	std::cout << " : wrongForm " << std::endl;
	form = intern.makeForm("wrongForm", "target4");
	delete form;
}