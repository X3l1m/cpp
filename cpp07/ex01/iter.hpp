/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/16 18:54:28 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/16 18:54:28 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstddef> // for size_t

template<typename T>
void iter(T *array, size_t len, void (*f)(T&))
{
	for (size_t i = 0; i < len; ++i)
	{
		f(array[i]);
	}
}