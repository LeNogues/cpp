/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 10:45:57 by seb               #+#    #+#             */
/*   Updated: 2025/06/06 11:26:31 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
    private :   std::string name;
                int         hitPoint;
                int         energyPoint;
                int         attackDamage;

    public :    ClapTrap(std::string name);
                ~ClapTrap();
                void        attack(const std::string &target);
                void        takeDamage(unsigned int amount);
                void        beRepaired(unsigned int amount);
};