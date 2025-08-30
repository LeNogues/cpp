/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:25:58 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/23 14:17:18 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/AForm.hpp"
#include "../header/Bureaucrat.hpp"

#pragma region Cannonical form 

AForm::AForm(std::string nameArg, int signGrade, int execGrade) 
    : name(nameArg), gradeToSign(signGrade), gradeToExec(execGrade)
{
    isSigned = 0;
}

AForm::AForm() 
    : name(""), gradeToSign(2), gradeToExec(2)
{
    isSigned = 0;
}

AForm::~AForm()
{
    
}

AForm::AForm(const AForm& other)
    : name(other.name), gradeToSign(other.gradeToSign),
        gradeToExec(other.gradeToExec)
{
    isSigned = 0;
}

AForm& AForm::operator=(const AForm& other)
{
    if (this != &other)
    {
        this->isSigned = other.isSigned;
    }
    return (*this);
}

std::ostream& operator<<(std::ostream &out, const AForm& form)
{
    if (form.getIsSigned())
    {
        out << form.getName() << " is signed, need grade " << form.getGradeToExec()
            << " to exec" << std::endl;       
    }
    else
    {
        out << form.getName() << " is not signed, need grade " << form.getGradeToSign()
            << " to sign and grade " << form.getGradeToExec() << " to exec" << std::endl;  
    }
    return (out);
}


#pragma endregion

#pragma region Getter + Setter

std::string AForm::getName() const
{
    return (name);
}

int         AForm::getGradeToSign() const
{
    return (gradeToSign);
}

int         AForm::getGradeToExec() const
{
    return (gradeToExec);
}

bool        AForm::getIsSigned() const
{
    return (isSigned);
}

#pragma endregion

#pragma region Member function

bool    AForm::beSigned(Bureaucrat bureaucrat)
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw  AForm::GradeTooLowException();
    isSigned = true;
    return (true);
}

bool    AForm::execute(Bureaucrat const &executor) const
{
    if (this->getIsSigned() != true)
        throw AForm::IsNotSignedException();
    if (executor.getGrade() > gradeToExec)
        throw AForm::GradeTooLowException();
    this->exec();
    return (1);
}

void AForm::exec()const
{
    
}

#pragma endregion

#pragma region Exception 

const char* AForm::GradeTooHighException::what() const throw()
{
    return("ERROR: Grade Too High");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("ERROR: Grade Too Low");
}

const char* AForm::IsNotSignedException::what() const throw()
{
    return ("ERROR: Form not signed");
}
#pragma endregion
