/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Identify.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/15 16:31:08 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/15 16:31:08 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP

#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

// Generates a random instance of A, B, or C
Base* generate(void);

// Identifies the actual type using a pointer
void identify(Base* p);

// Identifies the actual type using a reference
void identify(Base& p);

#endif