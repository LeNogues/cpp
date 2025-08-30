/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:11:52 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/12 14:54:11 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class AForm;


class Intern
{
private:

public:
        #pragma region Cannonical Class 
        
        Intern();
        ~Intern();
        Intern(const Intern &other);
        Intern& operator=(const Intern &other);
        
        #pragma endregion

        #pragma region Member function 
        
        AForm* makeForm(std::string name, std::string target);
        AForm* createShrubberyForm(std::string name);
        AForm* createPresidentialPardonForm(std::string name);
        AForm* createRobotomyRequestForm(std::string name);
        
        #pragma endregion
        
};

