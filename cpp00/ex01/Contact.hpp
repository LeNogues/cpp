/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 14:25:28 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/07/05 14:54:27 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
    private : 
                std::string firstName;
                std::string lastName;
                std::string nickName;
                std::string phoneNumber;
                std::string darkestSecret;
                bool        isEmpty;

    public : 
                Contact() : isEmpty(true) {}
                void setContact(std::string f, std::string l,std::string n, std::string p, std::string d);
                bool empty() const;
                void preview(int index);
                void isTheSearched();
                void printInfo();
                void askInfo();
};

#endif