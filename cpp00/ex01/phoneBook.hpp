/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:43:46 by seb               #+#    #+#             */
/*   Updated: 2025/05/31 20:57:40 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>

class contact
{
    private : 
                std::string firstName;
                std::string lastName;
                std::string nickName;
                std::string phoneNumber;
                std::string darkestSecret;
                bool        isEmpty;

    public : 
                contact() : isEmpty(true) {}
                void setContact(std::string f, std::string l,std::string n, std::string p, std::string d);
                bool empty() const;
                void preview(int index);
                void isTheSearched();
                void printInfo();
                void askInfo();
};

class phoneBook
{
    private : 
                contact     listContact[8];
                std::string olderContact;

    public : 
                void add();
                void search();               
};

