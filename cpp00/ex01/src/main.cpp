/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 14:25:08 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/07/05 14:27:13 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PhoneBook.hpp"
#include "../Contact.hpp"

int main(void)
{
    std::string str;
    std::string word;
    PhoneBook repertoire;

    while(1)
    {
        std::cout << "phonebook > ";
        if (!std::getline(std::cin, str))
            if (std::cin.eof())
                return (0);
        std::istringstream iss(str);
        iss >> word;
        if (word == "EXIT")
            break ;
        if (word == "ADD")
            repertoire.add();
        if (word == "SEARCH")
        {
            repertoire.search();
        }
        if (std::cin.eof())
                return (0);
    }
    return (0);
}