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
