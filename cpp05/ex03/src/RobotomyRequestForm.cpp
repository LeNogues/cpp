/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 15:10:29 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/24 19:53:34 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

#pragma region CannonicalForm

RobotomyRequestForm::RobotomyRequestForm(std::string targetArg)
    : AForm("RobotomyRequestForm", 72, 45), target(targetArg)
{
    
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other.getName(), other.getGradeToSign(), other.getGradeToExec()), target(other.target)
{
    
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other)
    {
        this->target = other.target;
    }
    return (*this);
}

#pragma endregion

#pragma region MemberFunction

void RobotomyRequestForm::exec() const
{
    
    int nb = rand();
        
    std::cout << "bzrbRbRbzzrzbbrz" << std::endl;
    if (nb % 2 == 0)
        std::cout << "Subject " << this->target << " Robotomy successfull,  YEAAH !" << std::endl;
    else
        std::cout << "woops i slipped... get me an other patient" << std::endl;
}

#pragma endregion