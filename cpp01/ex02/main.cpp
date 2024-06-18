/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/18 18:33:32 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/18 18:33:32 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string A = "HI THIS IS BRAIN";
	std::string* stringPTR = &A;
	std::string& stringREF = A;

	std::cout << "Address of the string:		" << &A << std::endl;
	std::cout << "Address held by stringPTR:	" << stringPTR << std::endl;
	std::cout << "Address held by stringREF:	" << &stringREF << std::endl;

	std::cout << "Value of the string:		" << A << std::endl;
	std::cout << "Value pointedt to by stringPTR:	" << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF:	" << stringREF << std::endl;

	return (0);
}