/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/16 18:54:22 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/16 18:54:22 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
	private:
	T* _array;
	unsigned int _size;
	public:
	Array();
	Array(unsigned int n);
	Array(const Array& other);
	~Array();
	Array& operator=(const Array& other);
	T& operator[](unsigned int index) const;
	unsigned int size() const;
};
#include <Array.tpp>