/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:28:33 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/11 12:49:45 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Bureaucrat
{
    private:
            const std::string   name;
            int                 grade;

    public:
            #pragma region form cannonique
            Bureaucrat(std::string name, int grade);
            ~Bureaucrat();
            Bureaucrat(const Bureaucrat&);
            Bureaucrat& operator=(Bureaucrat& other);
            #pragma endregion    

            #pragma region setter + getter 
            std::string getName() const;
            int         getGrade() const;
            #pragma endregion

            #pragma region member function 
            void        incrementGrade();
            void        decrementGrade();
            #pragma endregion

            #pragma region exception 
            
            class GradeTooHighException : public std::exception
            {
                public:
                    virtual const char* what() const throw();
            };

            class GradeTooLowException : public std::exception
            {
                public:
                    virtual const char* what() const throw();
            };

            #pragma endregion
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat& bureaucrat);