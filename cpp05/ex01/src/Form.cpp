/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:25:58 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/24 15:57:15 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Form.hpp"
#include "../header/Bureaucrat.hpp"

#pragma region Cannonical form 

Form::Form(std::string nameArg, int signGrade, int execGrade) 
    : name(nameArg), gradeToSign(signGrade), gradeToExec(execGrade)
{
    if (gradeToSign < 1 || gradeToExec < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExec > 150)
        throw Form::GradeTooLowException();
    isSigned = 0;
}

Form::~Form()
{
    
}

Form::Form(const Form& other)
    : name(other.name), gradeToSign(other.gradeToSign),
        gradeToExec(other.gradeToExec)
{
    isSigned = 0;
}

Form& Form::operator=(const Form& other)
{
    if (this != &other)
    {
        this->isSigned = other.isSigned;
    }
    return (*this);
}

std::ostream& operator<<(std::ostream &out, const Form& form)
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

std::string Form::getName() const
{
    return (name);
}

int         Form::getGradeToSign() const
{
    return (gradeToSign);
}

int         Form::getGradeToExec() const
{
    return (gradeToExec);
}

bool        Form::getIsSigned() const
{
    return (isSigned);
}

#pragma endregion

#pragma region Member function

bool    Form::beSigned(Bureaucrat bureaucrat)
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw Form::GradeTooLowException();
    isSigned = true;
    return (true);
}

#pragma endregion

#pragma region Exception 

const char* Form::GradeTooHighException::what() const throw()
{
    return("ERROR: Grade Too High\n");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("ERROR: Grade Too Low\n");
}
#pragma endregion
