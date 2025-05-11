/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/02 16:48:37 by seyildir      #+#    #+#                 */
/*   Updated: 2025/05/02 16:48:37 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <iterator>
#include <exception>
#include <algorithm>
#include <list>
#include <vector>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
    typedef typename std::stack<T, Container>::container_type::iterator iterator;

    MutantStack() : std::stack<T, Container>() {}
    MutantStack(const MutantStack& other) : std::stack<T, Container>(other) {}
    MutantStack& operator=(const MutantStack& other)
    {
        if (this != &other)
            std::stack<T, Container>::operator=(other);
        return *this;
    }
    ~MutantStack() {}

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
};