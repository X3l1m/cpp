/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Identify.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/15 16:31:06 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/15 16:31:06 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

// Generates a random instance of A, B, or C
Base* generate(void) {
    // Seed the random number generator (should be done once)
    static bool seeded = false;
    if (!seeded) {
        std::srand(static_cast<unsigned int>(std::time(NULL)));
        seeded = true;
    }
    
    // Generate a random number between 0 and 2
    int randomValue = std::rand() % 3;
    
    // Create an instance based on the random value
    switch (randomValue) {
        case 0:
            std::cout << "Generated an A object" << std::endl;
            return new A();
        case 1:
            std::cout << "Generated a B object" << std::endl;
            return new B();
        case 2:
            std::cout << "Generated a C object" << std::endl;
            return new C();
        default:
            // This should never happen
            return NULL;
    }
}

// Identifies the actual type using a pointer
void identify(Base* p) {
    if (dynamic_cast<A*>(p) != NULL) {
        std::cout << "A" << std::endl;
    } 
    else if (dynamic_cast<B*>(p) != NULL) {
        std::cout << "B" << std::endl;
    } 
    else if (dynamic_cast<C*>(p) != NULL) {
        std::cout << "C" << std::endl;
    }
    else {
        std::cout << "Unknown type" << std::endl;
    }
}

// Identifies the actual type using a reference
// We cannot use pointers inside this function
void identify(Base& p) {
    // We need to use try-catch blocks since dynamic_cast 
    // with references throws an exception on failure
    try {
        A& a = dynamic_cast<A&>(p);
        (void)a;  // Avoid unused variable warning
        std::cout << "A" << std::endl;
        return;
    } catch (std::bad_cast&) {
        // Not type A, try next type
    }
    
    try {
        B& b = dynamic_cast<B&>(p);
        (void)b;  // Avoid unused variable warning
        std::cout << "B" << std::endl;
        return;
    } catch (std::bad_cast&) {
        // Not type B, try next type
    }
    
    try {
        C& c = dynamic_cast<C&>(p);
        (void)c;  // Avoid unused variable warning
        std::cout << "C" << std::endl;
        return;
    } catch (std::bad_cast&) {
        // Not type C
        std::cout << "Unknown type" << std::endl;
    }
}