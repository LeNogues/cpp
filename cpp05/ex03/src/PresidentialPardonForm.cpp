/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 15:10:27 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/10 11:13:09 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/PresidentialPardonForm.hpp"

#pragma region CannonicalForm

PresidentialPardonForm::PresidentialPardonForm(std::string targetArg)
    : AForm("PresidentialPardonForm", 25, 5), target(targetArg)
{
    
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
    : AForm(other.getName(), other.getGradeToSign(), other.getGradeToExec()), target(other.target)
{
    
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != &other)
    {
        this->target = other.target;
    }
    return (*this);
}

#pragma endregion

#pragma region MemberFunction

void PresidentialPardonForm::exec() const
{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

#pragma endregion