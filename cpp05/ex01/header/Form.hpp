/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:25:49 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/08 13:55:13 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FORM_HPP
# define FORM_HPP
#endif

class Bureaucrat;

class Form
{
    private:
            const std::string   name;
            bool                isSigned;
            const int           gradeToSign;
            const int           gradeToExec;
            
    public:
            #pragma region Cannonical form 
            
            Form(std::string nameArg, int signGrade, int execGrade);
            ~Form();
            Form(const Form&);
            Form& operator=(const Form& other);
            #pragma endregion

            #pragma region getter + setter
            
            std::string getName() const;
            int         getGradeToSign() const;
            int         getGradeToExec() const;
            bool        getIsSigned() const;
    
            #pragma endregion
            
            #pragma region Member function
            
            bool        beSigned(Bureaucrat bureaucrat);
            
            #pragma endregion
            
            #pragma region exception
            
            class GradeTooHighException : public std::exception
            {
                public :
                        virtual const char* what() const throw();
            };

            class GradeTooLowException : public std::exception
            {
                public :
                        virtual const char* what() const throw();
            };
            
            #pragma endregion
            
            
};

std::ostream& operator<<(std::ostream &out, const Form& form);
