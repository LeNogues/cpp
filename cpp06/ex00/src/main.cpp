/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:27:52 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/25 13:46:40 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Input: \"2147483647\" (INT_MAX)" << std::endl;
        ScalarConverter::convert("2147483647");
        std::cout << std::endl;

        std::cout << "Input: \"2147483648\" (INT_MAX + 1)" << std::endl;
        ScalarConverter::convert("2147483648");
        std::cout << std::endl;

        std::cout << "Input: \"-2147483648\" (INT_MIN)" << std::endl;
        ScalarConverter::convert("-2147483648");
        std::cout << std::endl;

        std::cout << "Input: \"-2147483649\" (INT_MIN - 1)" << std::endl;
        ScalarConverter::convert("-2147483649");
        std::cout << std::endl;

        std::cout << "--- Test with invalid input ---" << std::endl;
        std::cout << "Input: \"hello world\"" << std::endl;
        ScalarConverter::convert("hello world");
        std::cout << std::endl;
    }
    else
    {
        std::cout << "--- Converting user input: \"" << argv[1] << "\" ---" << std::endl;
        ScalarConverter::convert(argv[1]);
    }

    return 0;
}