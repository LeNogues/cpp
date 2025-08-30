/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:27:56 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/23 14:45:43 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ScalarConverter
{
    private:
            
    public:
            ScalarConverter(/* args */);
            ~ScalarConverter();
            ScalarConverter(const ScalarConverter&);
            ScalarConverter& operator=(const ScalarConverter& other);
            static void convert(std::string value);
};
