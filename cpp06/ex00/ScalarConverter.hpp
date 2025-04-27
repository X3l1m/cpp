/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/15 16:31:26 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/15 16:31:26 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <string>

class ScalarConverter {
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& src);
    ScalarConverter& operator=(const ScalarConverter& src);
    ~ScalarConverter();

    static bool isChar(const std::string& literal);
    static bool isInt(const std::string& literal);
    static bool isFloat(const std::string& literal);
    static bool isDouble(const std::string& literal);
    static bool isPseudoLiteral(const std::string& literal);

    static void handlePseudoLiteral(const std::string& literal);
    
    static void convertChar(const std::string& literal);
    static void convertInt(const std::string& literal);
    static void convertFloat(const std::string& literal);
    static void convertDouble(const std::string& literal);

public:
    static void convert(const std::string& literal);
};

#endif