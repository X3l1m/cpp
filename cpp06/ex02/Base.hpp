/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/15 16:31:04 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/15 16:31:04 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

class Base {
public:
    virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

#endif