/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/02 16:48:18 by seyildir      #+#    #+#                 */
/*   Updated: 2025/05/02 16:48:18 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	try
	{
		std::vector<int>::iterator it = easyfind(vec, 3);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (const NotFoundException& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::vector<int>::iterator it = easyfind(vec, 6);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (const NotFoundException& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}