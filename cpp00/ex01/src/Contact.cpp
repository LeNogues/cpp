/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 14:25:12 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/07/07 14:46:00 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PhoneBook.hpp"
#include "../Contact.hpp"

void    Contact::askInfo()
{
    std::string name;
    std::string lastName;
    std::string nickName;
    std::string number;
    std::string secret;
    std::string str = "";
    
     while (str == "")
    {
        std::cout << "First name :";
        if (!std::getline(std::cin, str))
            if (std::cin.eof())
                return ;
        unsigned long i = 0;
        while (i < str.length() && isspace(str[i]))
            i++;
        str.erase(0, i);
        nickName = str;  
        name = str;
    }
    str = "";
    while (str == "")
    {
        std::cout << "Last name :";
        if (!std::getline(std::cin, str))
            if (std::cin.eof())
                return ;
        unsigned long i = 0;
        while (i < str.length() && isspace(str[i]))
            i++;
        str.erase(0, i);
        nickName = str;  
        lastName = str;
    }
    str = "";
    while (str == "")
    {
        std::cout << "Nick name :";
        if (!std::getline(std::cin, str))
            if (std::cin.eof())
                return ;
        unsigned long i = 0;
        while (i < str.length() && isspace(str[i]))
            i++;
        str.erase(0, i);
        nickName = str;  
    }
    str = "";
    while (str == "")
    {
        std::cout << "Phone number :";
        if (!std::getline(std::cin, str))
            if (std::cin.eof())
                return ;
        number = str;
        int i = 0;
        while (number[i] && isdigit(number[i]))
            i++;
        if ((!isdigit(number[i]) && number[i]) || str.length() != 10)
            str = "";
    }
    str = "";
    while (str == "")
    {
        std::cout << "Darkest secret :";
        if (!std::getline(std::cin, str))
            if (std::cin.eof())
                return ;
        unsigned long i = 0;
        while (i < str.length() && isspace(str[i]))
            i++;
        str.erase(0, i);
        nickName = str;  
        secret = str;
    }
    setContact(name, lastName, nickName, number, secret);
}

void    PhoneBook::add()
{
    Contact tmp;
    int i = 0;
    
    while (i != 8 && !listContact[i].empty())
        i++;
    if(i != 8)
       listContact[i].askInfo();
    else
    {
        i = 0;
        while(i != 7)
        {
            listContact[i] = listContact[i + 1];
            i++;
        }
        listContact[i].askInfo();
    }

}

void Contact::preview(int index)
{
    std::cout.setf(std::ios::right);
    std::cout << "|";
    std::cout.width(10);
    std::cout << index + 1;
    std::cout << "|";
    std::cout.width(10);
    if (firstName.length() > 10)
        std::cout << firstName.substr(0, 9) + ".";
    else
        std::cout<< firstName ;
    std::cout << "|";
    std::cout.width(10);
    if (lastName.length() > 10)
        std::cout << lastName.substr(0, 9) + ".";
    else
        std::cout << lastName;
    std::cout << "|";
    std::cout.width(10);
    if (nickName.length() > 10)
        std::cout << nickName.substr(0, 9) + ".";
    else
        std::cout << nickName;
    std::cout << "|" << std::endl;
}

void Contact::isTheSearched()
{
    std::cout << "First name : " << firstName << std::endl;
    std::cout << "Last name : " << lastName << std::endl;
    std::cout << "Nick name : " << nickName << std::endl;
    std::cout << "Phone number : " << phoneNumber << std::endl;
    std::cout << "Darkest secret : " << darkestSecret << std::endl;
}

void Contact::setContact(std::string f, std::string l,std::string n, std::string p, std::string d)
{
    firstName = f;
    lastName = l;
    nickName = n;
    phoneNumber = p;
    darkestSecret = d;
    isEmpty = false;
}

bool Contact::empty() const
{
    return isEmpty;
}