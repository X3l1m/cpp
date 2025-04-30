/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/16 18:54:27 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/16 18:54:27 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void print(int &n)
{
	std::cout << n << std::endl;
}

void print(char &c)
{
	std::cout << c << std::endl;
}

void print(std::string &s)
{
	std::cout << s << std::endl;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	char arr2[] = {'a', 'b', 'c', 'd', 'e'};
	std::string arr3[] = {"Hello", "World", "!"};

	iter(arr, 5, print);
	iter(arr2, 5, print);
	iter(arr3, 3, print);

	return 0;
}