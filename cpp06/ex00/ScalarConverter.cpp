/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/15 16:31:24 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/15 16:31:24 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <limits>
#include <cmath>
#include <sstream>
#include <iomanip>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& src) {
    (void)src;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& src) {
    (void)src;
    return *this;
}

ScalarConverter::~ScalarConverter() {}

bool ScalarConverter::isChar(const std::string& literal) {
    if (literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'')
        return true;
    if (literal.length() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]))
        return true;
    return false;
}

bool ScalarConverter::isInt(const std::string& literal) {
    size_t i = 0;
    if (literal[0] == '+' || literal[0] == '-')
        i++;
    for (; i < literal.length(); i++) {
        if (!std::isdigit(literal[i]))
            return false;
    }
    return !literal.empty();
}

bool ScalarConverter::isFloat(const std::string& literal) {
    if (literal == "nanf" || literal == "+inff" || literal == "-inff")
        return true;
    size_t len = literal.length();
    if (len < 2 || literal[len - 1] != 'f')
        return false;
    bool hasDecimalPoint = false;
    size_t i = 0;
    if (literal[0] == '+' || literal[0] == '-')
        i++;
    for (; i < len - 1; i++) {
        if (literal[i] == '.') {
            if (hasDecimalPoint)
                return false;
            hasDecimalPoint = true;
        } else if (!std::isdigit(literal[i])) {
            return false;
        }
    }
    return hasDecimalPoint;
}

bool ScalarConverter::isDouble(const std::string& literal) {
    if (literal == "nan" || literal == "+inf" || literal == "-inf")
        return true;
    bool hasDecimalPoint = false;
    size_t i = 0;
    if (literal[0] == '+' || literal[0] == '-')
        i++;
    for (; i < literal.length(); i++) {
        if (literal[i] == '.') {
            if (hasDecimalPoint)
                return false;
            hasDecimalPoint = true;
        } else if (!std::isdigit(literal[i])) {
            return false;
        }
    }
    return hasDecimalPoint;
}

bool ScalarConverter::isPseudoLiteral(const std::string& literal) {
    return (literal == "nan" || literal == "+inf" || literal == "-inf" ||
            literal == "nanf" || literal == "+inff" || literal == "-inff");
}

void ScalarConverter::handlePseudoLiteral(const std::string& literal) {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (literal == "nan" || literal == "+inf" || literal == "-inf") {
        std::cout << "float: " << literal << "f" << std::endl;
        std::cout << "double: " << literal << std::endl;
    } else {
        std::string withoutF = literal.substr(0, literal.length() - 1);
        std::cout << "float: " << literal << std::endl;
        std::cout << "double: " << withoutF << std::endl;
    }
}

void ScalarConverter::convertChar(const std::string& literal) {
    char c;
    if (isChar(literal)) {
        if (literal.length() == 3)
            c = literal[1];
        else
            c = literal[0];
        if (std::isprint(c))
            std::cout << "char: '" << c << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        return;
    }
    try {
        int value;
        if (literal[literal.length() - 1] == 'f') {
            float fValue = std::stof(literal);
            value = static_cast<int>(fValue);
        } else if (isDouble(literal)) {
            double dValue = std::stod(literal);
            value = static_cast<int>(dValue);
        } else {
            value = std::stoi(literal);
        }
        if (value < 0 || value > 127) {
            std::cout << "char: impossible" << std::endl;
            return;
        }
        c = static_cast<char>(value);
        if (std::isprint(c))
            std::cout << "char: '" << c << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "char: impossible" << std::endl;
    }
}

void ScalarConverter::convertInt(const std::string& literal) {
    if (isChar(literal)) {
        char c = (literal.length() == 3) ? literal[1] : literal[0];
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        return;
    }
    try {
        long value;
        if (literal[literal.length() - 1] == 'f') {
            float fValue = std::stof(literal);
            value = static_cast<long>(fValue);
        } else if (isDouble(literal)) {
            double dValue = std::stod(literal);
            value = static_cast<long>(dValue);
        } else {
            value = std::stol(literal);
        }
        if (value < std::numeric_limits<int>::min() || 
            value > std::numeric_limits<int>::max()) {
            std::cout << "int: impossible" << std::endl;
            return;
        }
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    } catch (const std::exception& e) {
        std::cout << "int: impossible" << std::endl;
    }
}

void ScalarConverter::convertFloat(const std::string& literal) {
    if (isChar(literal)) {
        char c = (literal.length() == 3) ? literal[1] : literal[0];
        std::cout << "float: " << std::fixed << std::setprecision(1) 
                  << static_cast<float>(c) << "f" << std::endl;
        return;
    }
    try {
        float value;
        if (literal[literal.length() - 1] == 'f') {
            std::string numericPart = literal.substr(0, literal.length() - 1);
            value = std::stof(numericPart);
        } else {
            value = std::stof(literal);
        }
        std::cout << "float: " << std::fixed << std::setprecision(1) << value << "f" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "float: impossible" << std::endl;
    }
}

void ScalarConverter::convertDouble(const std::string& literal) {
    if (isChar(literal)) {
        char c = (literal.length() == 3) ? literal[1] : literal[0];
        std::cout << "double: " << std::fixed << std::setprecision(1) 
                  << static_cast<double>(c) << std::endl;
        return;
    }
    try {
        double value;
        if (literal[literal.length() - 1] == 'f') {
            std::string numericPart = literal.substr(0, literal.length() - 1);
            value = std::stod(numericPart);
        } else {
            value = std::stod(literal);
        }
        std::cout << "double: " << std::fixed << std::setprecision(1) << value << std::endl;
    } catch (const std::exception& e) {
        std::cout << "double: impossible" << std::endl;
    }
}

void ScalarConverter::convert(const std::string& literal) {
    if (isPseudoLiteral(literal)) {
        handlePseudoLiteral(literal);
        return;
    }
    convertChar(literal);
    convertInt(literal);
    convertFloat(literal);
    convertDouble(literal);
}