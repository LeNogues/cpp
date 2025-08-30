/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:11:49 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/22 12:22:11 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include  "../header/Intern.hpp"
#include  "../header/PresidentialPardonForm.hpp"
#include  "../header/ShrubberyCreationForm.hpp"
#include  "../header/RobotomyRequestForm.hpp"

#pragma region Cannonical class 

Intern::Intern()
{

}

Intern::~Intern()
{
}

Intern::Intern(const Intern &other)
{
    (void)other;
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return (*this);
}

#pragma endregion

#pragma region Member Function

AForm *Intern::createPresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm *Intern::createShrubberyForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm *Intern::createRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    int i = 0;
    std::string FormNeeded[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyRequestForm"};
    AForm* (Intern::*function[])(std::string) = {&Intern::createPresidentialPardonForm, &Intern::createRobotomyRequestForm, &Intern::createShrubberyForm};
    
    while (FormNeeded[i] != name && i < 3)
        i++;
    if (FormNeeded[i] == name)
        return (this->*function[i])(target);
    return (NULL);
}

#pragma endregion
