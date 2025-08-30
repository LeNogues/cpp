/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 15:10:37 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/12 14:58:09 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef AFORM_HPP
# define AFORM_HPP
#include "AForm.hpp"
#endif

class RobotomyRequestForm : public AForm
{
    private:
            std::string target;
    public:
            #pragma region Cannonical Class 
            
            RobotomyRequestForm(std::string target);
            ~RobotomyRequestForm();
            RobotomyRequestForm(const RobotomyRequestForm& other);
            RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
            
            #pragma endregion

            #pragma region MemberFunction
            
            void exec() const;
            
            #pragma endregion
};

