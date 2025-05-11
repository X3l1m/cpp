/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/02 16:48:15 by seyildir      #+#    #+#                 */
/*   Updated: 2025/05/02 16:48:15 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <iterator>

class NotFoundException : public std::exception
{
public:
	const char* what() const throw()
	{
		return "Element not found";
	}
};

template <typename T>
typename T::iterator easyfind(T& container, int n)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw (NotFoundException());
	return it;
}
