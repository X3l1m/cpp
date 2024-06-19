/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/19 18:51:47 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/19 18:51:47 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "Debug message." << std::endl;
}
void Harl::info(void) {
	std::cout << "Info message." << std::endl;
}
void Harl::warning(void) {
	std::cout << "Warning message." << std::endl;
}
void Harl::error(void) {
	std::cout << "Error message." << std::endl;
}

void Harl::complain(std::string level) {
	void (Harl::*func[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*func[i])();
			return;
		}
		i++;
	}
	std::cout << "There is no " << level << " level" << std::endl;
}