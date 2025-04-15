/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 18:50:24 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/07 18:50:24 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	try {
		Bureaucrat bureaucrat("John", 1);
		std::cout << bureaucrat << std::endl;

		ShrubberyCreationForm shrubbery("home");
		RobotomyRequestForm robotomy("Bender");
		PresidentialPardonForm pardon("Zaphod");

		std::cout << shrubbery << std::endl;
		std::cout << robotomy << std::endl;
		std::cout << pardon << std::endl;

		bureaucrat.signForm(shrubbery);
		bureaucrat.executeForm(shrubbery);

		bureaucrat.signForm(robotomy);
		bureaucrat.executeForm(robotomy);

		bureaucrat.signForm(pardon);
		bureaucrat.executeForm(pardon);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}