/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/02 16:48:30 by seyildir      #+#    #+#                 */
/*   Updated: 2025/05/02 16:48:30 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _n(n) {}
Span::Span(const Span& other) : _n(other._n), _numbers(other._numbers) {}
Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        _n = other._n;
        _numbers = other._numbers;
    }
    return *this;
}
Span::~Span() {}

void Span::addNumber(int number)
{
    if (_numbers.size() >= _n)
        throw std::out_of_range("Span is full");
    _numbers.push_back(number);
}

int Span::shortestSpan()
{
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
    int minSpan = INT_MAX;
    for (size_t i = 1; i < sorted.size(); ++i)
    {
        int span = sorted[i] - sorted[i - 1];
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}

int Span::longestSpan()
{
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");
    int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());
    return max - min;
}