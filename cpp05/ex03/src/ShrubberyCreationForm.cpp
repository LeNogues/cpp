/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 15:10:32 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/10 11:13:17 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ShrubberyCreationForm.hpp"
#include <fstream>

#pragma region Description 

ShrubberyCreationForm::ShrubberyCreationForm(std::string targetArg)
    : AForm("ShrubberyCreationForm", 145, 137), target(targetArg)
{
    
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other.getName(), other.getGradeToSign(), other.getGradeToExec()), target(other.target)
{
    
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
    {
        this->target = other.target;
    }
    return (*this);
}

#pragma endregion

#pragma region MemberFunction

void    ShrubberyCreationForm::exec() const
{
    std::string fileName = this->target + "_shrubberry";
    std::ofstream newTree(fileName.c_str());
    if (newTree.is_open())
    {
        newTree << "       _-_\n";
        newTree << "    /~~   ~~\\\n";
        newTree << " /~~         ~~\\\n";
        newTree << "{               }\n";
        newTree << " \\  _-     -_  /\n";
        newTree << "   ~  \\\\ //  ~\n";  
        newTree << "_- -   | | _- _\n";
        newTree << "      // \\\n";  
         
    }
    return ;
}

#pragma endregion