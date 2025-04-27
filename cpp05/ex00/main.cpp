/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 18:49:44 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/07 18:49:44 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	Bureaucrat bureaucrat("Kaka", 50);
	std::cout << bureaucrat << std::endl;
	try {
		bureaucrat.incrementGrade();
		while (1)
		{
			bureaucrat.incrementGrade();
		}
		
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << bureaucrat << std::endl;
	try {
		while (1)
		{
			bureaucrat.decrementGrade();
		}
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << bureaucrat << std::endl;

	return 0;
}