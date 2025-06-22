/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 10:45:57 by seb               #+#    #+#             */
/*   Updated: 2025/06/06 12:11:44 by seb              ###   ########.fr       */
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
                
                void        setAttackDamage(unsigned int amount);
                void        setName(std::string n);
                void        setEnergyPoint(unsigned int amount);
                void        setHitPoint(unsigned int amount);
                std::string getName();
                int         getHitPoint();
                int         getEnergyPoint();
                int         getAttackDamage();
};