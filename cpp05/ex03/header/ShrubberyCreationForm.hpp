/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 15:10:39 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/10 11:12:53 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef AFORM_HPP
# define AFORM_HPP
# include "AForm.hpp"
#endif

class ShrubberyCreationForm : public AForm
{
    private:
            std::string target;
    public:
            #pragma region Cannonical Class
            
            ShrubberyCreationForm(std::string target);
            ~ShrubberyCreationForm();
            ShrubberyCreationForm(const ShrubberyCreationForm& other);
            ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
            
            #pragma endregion

            #pragma region MemberFunction
            
            void exec() const;
            
            #pragma endregion

};
