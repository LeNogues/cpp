/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 15:10:34 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/10 11:42:06 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef AFORM_HPP
# define AFORM_HPP
#include "AForm.hpp"
#endif

class PresidentialPardonForm : public AForm
{
    private:
            std::string target;
    public:
            #pragma region Cannonical Class 
            
            PresidentialPardonForm(std::string target);
            ~PresidentialPardonForm();
            PresidentialPardonForm(const PresidentialPardonForm& other);
            PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
            
            #pragma endregion

            #pragma region MemberFunction
            
            void        exec() const;
            
            #pragma endregion
            

};

