/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/15 16:31:16 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/15 16:31:16 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main() {
    // Create a Data object
    Data originalData;
    originalData.id = 42;
    originalData.name = "Test Data";
    originalData.value = 3.14;
    
    // Print original data
    std::cout << "Original Data:" << std::endl;
    std::cout << "Address: " << &originalData << std::endl;
    std::cout << "ID: " << originalData.id << std::endl;
    std::cout << "Name: " << originalData.name << std::endl;
    std::cout << "Value: " << originalData.value << std::endl;
    std::cout << std::endl;
    
    // Serialize the pointer
    uintptr_t serialized = Serializer::serialize(&originalData);
    std::cout << "Serialized value (uintptr_t): " << serialized << std::endl;
    std::cout << std::endl;
    
    // Deserialize back to a Data pointer
    Data* deserialized = Serializer::deserialize(serialized);
    
    // Print deserialized data
    std::cout << "Deserialized Data:" << std::endl;
    std::cout << "Address: " << deserialized << std::endl;
    std::cout << "ID: " << deserialized->id << std::endl;
    std::cout << "Name: " << deserialized->name << std::endl;
    std::cout << "Value: " << deserialized->value << std::endl;
    std::cout << std::endl;
    
    // Check if the pointers are the same
    std::cout << "Original pointer: " << &originalData << std::endl;
    std::cout << "Deserialized pointer: " << deserialized << std::endl;
    std::cout << "Are pointers equal? " << (&originalData == deserialized ? "YES" : "NO") << std::endl;
    
    return 0;
}