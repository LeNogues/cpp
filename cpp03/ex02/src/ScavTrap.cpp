/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 11:52:49 by seb               #+#    #+#             */
/*   Updated: 2025/06/30 14:32:48 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ScavTrap.hpp"

void    ScavTrap::attack(const std::string &target)
{
    if (getEnergyPoint() > 0 && getHitPoint() > 0)
    {
        std::cout << getName() << " attacked " << target << " for " << getAttackDamage() << " damage, BOOOOM" << std::endl;
        setEnergyPoint(getEnergyPoint() - 1);
        return ;
    }
    if (getEnergyPoint() <= 0)
        std::cout << getName() << " not enough energy point to attack... for now" << std::endl;
    else
        std::cout << getName() << " is dead, but i mean... we could be doing Zombies" << std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "well, i guess i'm gateKeeping now" << std::endl;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
    setName(n);
    setAttackDamage(20);
    setEnergyPoint(50);
    setHitPoint(100);
    std::cout << getName() << " got constructed, but better" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << getName() << " got destructed, but better" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& other) : ClapTrap(other)
{
    std::cout << "Copy constructor called" << std::endl;
    setName(other.getName());
    setEnergyPoint(other.getEnergyPoint());
    setHitPoint(other.getHitPoint());
    setAttackDamage(other.getAttackDamage());
}

ScavTrap& ScavTrap::operator=(ScavTrap& other)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &other)
    {
        setName(other.getName());
        setEnergyPoint(other.getEnergyPoint());
        setHitPoint(other.getHitPoint());
        setAttackDamage(other.getAttackDamage());
    }
    return (*this);
}
