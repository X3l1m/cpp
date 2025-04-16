/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/15 16:31:10 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/15 16:31:10 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"
#include <iostream>

int main() {
    std::cout << "===== Test 1 =====" << std::endl;
    Base* obj1 = generate();
    std::cout << "Identifying with pointer: ";
    identify(obj1);
    std::cout << "Identifying with reference: ";
    identify(*obj1);
    std::cout << std::endl;
    
    std::cout << "===== Test 2 =====" << std::endl;
    Base* obj2 = generate();
    std::cout << "Identifying with pointer: ";
    identify(obj2);
    std::cout << "Identifying with reference: ";
    identify(*obj2);
    std::cout << std::endl;
    
    std::cout << "===== Test 3 =====" << std::endl;
    Base* obj3 = generate();
    std::cout << "Identifying with pointer: ";
    identify(obj3);
    std::cout << "Identifying with reference: ";
    identify(*obj3);
    std::cout << std::endl;
    
    delete obj1;
    delete obj2;
    delete obj3;
    
    return 0;
}