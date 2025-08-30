/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:25:49 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/12 14:58:38 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef AFORM_HPP
# define AFORM_HPP
#endif

class Bureaucrat;

class AForm
{
    private:
            const std::string   name;
            bool                isSigned;
            const int           gradeToSign;
            const int           gradeToExec;
            
    public:
            #pragma region Cannonical form 
            
            AForm();
            AForm(std::string nameArg, int signGrade, int execGrade);
            virtual ~AForm() = 0;
            AForm(const AForm&);
            AForm& operator=(const AForm& other);
            #pragma endregion

            #pragma region getter + setter
            
            std::string getName() const;
            int         getGradeToSign() const;
            int         getGradeToExec() const;
            bool        getIsSigned() const;
    
            #pragma endregion
            
            #pragma region Member function
            
            bool                beSigned(Bureaucrat bureaucrat);
            bool                execute(Bureaucrat const &executor) const;
            virtual void        exec() const;
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

            class IsNotSignedException : public std::exception
            {
                public :
                        virtual const char* what() const throw();
            };
            
            #pragma endregion
            
            
};

std::ostream& operator<<(std::ostream &out, const AForm& form);
