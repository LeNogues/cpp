/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 10:45:57 by seb               #+#    #+#             */
/*   Updated: 2025/06/25 19:58:35 by sle-nogu         ###   ########.fr       */
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
                ClapTrap(const ClapTrap&);
                ClapTrap& operator=(const ClapTrap& other);
                void        attack(const std::string &target);
                void        takeDamage(unsigned int amount);
                void        beRepaired(unsigned int amount);
};