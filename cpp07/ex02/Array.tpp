/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.tpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/16 18:54:16 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/16 18:54:16 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <Array.hpp>

template <typename T>
Array<T>::Array() : _array(nullptr), _size(0) {}
template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
	for (unsigned int i = 0; i < n; ++i)
		_array[i] = T();
}

template <typename T>
Array<T>::Array(const Array& other) : _array(nullptr), _size(0)
{
	*this = other;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		delete[] _array;
		_size = other._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_array[i] = other._array[i];
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("Index out of range");
	return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}