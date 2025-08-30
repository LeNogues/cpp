/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:29:42 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/06 17:28:51 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Bureaucrat.hpp"
#include <sstream>

#pragma region Cannonical class
Bureaucrat::Bureaucrat(const std::string nameArg, int gradeArg)
    : name(nameArg), grade(gradeArg)
{
    if (gradeArg < 1)
        throw Bureaucrat::GradeTooHighException();
    if (gradeArg > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
    : name(other.name), grade(other.grade)
{

}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &other)
{
    if (this != &other)
    {
        this->grade = other.getGrade();
    }
    return (*this);
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat& Bureaucrat)
{
    out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade();
    return (out);
}

#pragma endregion

#pragma region Getter/setter
std::string Bureaucrat::getName() const
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

#pragma endregion

#pragma region Member function

void        Bureaucrat::incrementGrade()
{
    if (grade == 1)
        throw Bureaucrat::GradeTooHighException();
    else
        grade--;
}

void        Bureaucrat::decrementGrade()
{
    if (grade == 150)
        throw Bureaucrat::GradeTooLowException();
    else
        grade++;
}



#pragma endregion

#pragma region Exception 

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("ERROR: grade too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("ERROR: grade too Low");
}

#pragma endregion