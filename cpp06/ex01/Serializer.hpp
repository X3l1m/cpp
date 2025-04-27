/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/15 16:31:20 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/15 16:31:20 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>
#include "Data.hpp"

class Serializer {
private:
    // Private constructor to prevent instantiation
    Serializer();
    // Private copy constructor
    Serializer(const Serializer& src);
    // Private assignment operator
    Serializer& operator=(const Serializer& src);
    // Private destructor
    ~Serializer();

public:
    // Converts a pointer to Data to uintptr_t
    static uintptr_t serialize(Data* ptr);
    
    // Converts a uintptr_t back to a pointer to Data
    static Data* deserialize(uintptr_t raw);
};
