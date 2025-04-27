/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/15 16:31:22 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/15 16:31:22 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Usage: ./convert <literal>" << std::endl;
        return 1;
    }
    
    ScalarConverter::convert(argv[1]);
    return 0;
}