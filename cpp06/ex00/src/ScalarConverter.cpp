/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:27:54 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/25 14:32:50 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ScalarConverter.hpp"
#include <sstream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

#pragma region Cannonical Class 

ScalarConverter::ScalarConverter()
{
    
}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    (void)other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    (void)other;
    return (*this);
}

#pragma endregion

#pragma region MemberFunction 

static void showInt(double doubleValue, std::string valueStr)
{
    if (valueStr == "nan" || valueStr == "-nan"  || valueStr == "nanf" || valueStr == "inf" || valueStr == "-inf" || valueStr == "+inf")
        std::cout << "int: impossible" << std::endl;
    else if (doubleValue >  2147483647 || doubleValue <  -2147483648)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(doubleValue) << std::endl;
}

static void showChar(double doubleValue, std::string valueStr)
{
    if (doubleValue < 32 || doubleValue > 126)
        std::cout << "char: Non displayable" << std::endl;
    else if (valueStr == "nan" || valueStr == "nanf" || valueStr == "inf" || valueStr == "-inf" || valueStr == "+inf")
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(doubleValue)  << std::endl;
}

static void showFloat(double doubleValue)
{
    std::cout << "float:";
    if (fmod(doubleValue, 1.0) == 0.0)
        std::cout << std::fixed << std::setprecision(1) << static_cast<float>(doubleValue) << "f";
    else
        std::cout << static_cast<float>(doubleValue) << "f";
    std::cout << std::endl;
}

static void showDouble(double doubleValue)
{
    std::cout << "double:";
    if (fmod(doubleValue, 1.0) == 0.0)
        std::cout << std::fixed << std::setprecision(1) << doubleValue;
    else
        std::cout << doubleValue;
    std::cout << std::endl;
}

static void printError()
{
    std::cout << "char: Impossible" << std::endl;
    std::cout << "int: Impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}

void ScalarConverter::convert(std::string valueStr)
{
    char* end;
    double doubleValue = std::strtod(valueStr.c_str(), &end);

    if (valueStr.length() == 1 && !isdigit(valueStr[0]))
        doubleValue = valueStr[0];
    else if (end == valueStr.c_str())
    {
        printError();
        return;
    }
    else if (*end != '\0' && (*end != 'f' || *(end + 1) != '\0'))
    {
        printError();
        return;
    }
    showChar(doubleValue, valueStr);
    showInt(doubleValue, valueStr);
    showFloat(doubleValue);
    showDouble(doubleValue);
}

#pragma endregion
