/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/15 16:31:18 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/15 16:31:18 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// Private constructor implementation
Serializer::Serializer() {}

// Private copy constructor implementation
Serializer::Serializer(const Serializer& src) {
    (void)src;
}

// Private assignment operator implementation
Serializer& Serializer::operator=(const Serializer& src) {
    (void)src;
    return *this;
}

// Private destructor implementation
Serializer::~Serializer() {}

// Implementation of serialize method
uintptr_t Serializer::serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

// Implementation of deserialize method
Data* Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}