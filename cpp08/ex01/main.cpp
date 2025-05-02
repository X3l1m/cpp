/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/02 16:48:21 by seyildir      #+#    #+#                 */
/*   Updated: 2025/05/02 16:48:21 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

    // Test exception for adding more numbers
    try {
        sp.addNumber(42);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    // Test exception for insufficient numbers
    Span sp2 = Span(2);
    sp2.addNumber(1);
    try {
        std::cout << sp2.shortestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}