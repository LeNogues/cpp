/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:43:48 by seb               #+#    #+#             */
/*   Updated: 2025/07/05 14:47:03 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PhoneBook.hpp"
#include "../Contact.hpp"

void    PhoneBook::search()
{
    int i = 0;
    int index;
    std::string str = "";
    std::string reste = "";
    
    if (listContact[0].empty())
    {
        std::cout << "annuaire vide" << std::endl;
        return ;
    }
    std::cout << "|  index   |First Name| LastName | NickName |" << std::endl;
    while(i != 8)
    {
        listContact[i].preview(i);
        i++;
    }
    std::cout << "index : ";
    if (!std::getline(std::cin, str))
        if (std::cin.eof())
            return ;
    std::istringstream iss(str);
    iss >> index;
    if ((index < 1 || index > 8) || (iss >> reste) || listContact[index - 1].empty())
        std::cout << "index invalide" << std::endl;
    else
        listContact[index - 1].isTheSearched();
}


