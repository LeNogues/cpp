/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:43:48 by seb               #+#    #+#             */
/*   Updated: 2025/05/31 20:57:31 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

void    contact::askInfo()
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
        std::getline(std::cin, str);
        name = str;
    }
    str = "";
    while (str == "")
    {
        std::cout << "Last name :";
        std::getline(std::cin, str);
        lastName = str;
    }
    str = "";
    while (str == "")
    {
        std::cout << "Nick name :";
        std::getline(std::cin, str);
        nickName = str;  
    }
    str = "";
    while (str == "")
    {
        std::cout << "Phone number :";
        std::getline(std::cin, str);
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
        std::getline(std::cin, str);
        secret = str;
    }
    setContact(name, lastName, nickName, number, secret);
}

void    phoneBook::add()
{
    contact tmp;
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

void contact::preview(int index)
{
    std::cout << "|";
    if (firstName.length() > 10)
        std::cout << std::setw(10) << firstName.substr(0, 9) + ".";
    else
        std::cout<< firstName << std::setw(11 - firstName.length()) ;
    std::cout << "|";
    if (lastName.length() > 10)
        std::cout << std::setw(10) << lastName.substr(0, 9) + ".";
    else
        std::cout << lastName <<  std::setw(11 - lastName.length());
    std::cout << "|";
    if (nickName.length() > 10)
        std::cout << std::setw(10) << nickName.substr(0, 9) + ".";
    else
        std::cout << nickName <<  std::setw(11 - nickName.length()) ;
    std::cout << "|";
    std::cout << std::setw(10) << phoneNumber;
    std::cout << "|";
    std::cout << index + 1 << std::setw(10);
    std::cout << "|" << std::endl;
}

void contact::isTheSearched()
{
    std::cout << "First name : " << firstName << std::endl;
    std::cout << "Last name : " << lastName << std::endl;
    std::cout << "Nick name : " << nickName << std::endl;
    std::cout << "Phone number : " << phoneNumber << std::endl;
    std::cout << "Darkest secret : " << darkestSecret << std::endl;
}

void contact::setContact(std::string f, std::string l,std::string n, std::string p, std::string d)
{
    firstName = f;
    lastName = l;
    nickName = n;
    phoneNumber = p;
    darkestSecret = d;
    isEmpty = false;
}

bool contact::empty() const
{
    return isEmpty;
}

void    phoneBook::search()
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
    std::cout << "|First Name| LastName | NickName |  Number  |  index   |" << std::endl;
    while(i != 8)
    {
        listContact[i].preview(i);
        i++;
    }
    std::cout << "index : ";
    std::getline(std::cin, str);
    std::istringstream iss(str);
    iss >> index;
    if ((index < 1 || index > 8) || (iss >> reste) || listContact[index - 1].empty())
        std::cout << "index invalide" << std::endl;
    else
        listContact[index - 1].isTheSearched();
}

int main(void)
{
    std::string str;
    std::string word;
    phoneBook repertoire;

    while(1)
    {
        std::cout << "phonebook > ";
        std::getline(std::cin, str);
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
    }
    return (0);
}
