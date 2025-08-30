/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:35:13 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/06/30 14:57:28 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../FragTrap.hpp"

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
    setName(n);
    setAttackDamage(30);
    setEnergyPoint(100);
    setHitPoint(100);
    std::cout << getName() << " got constructed, but cooler" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << getName() << " got destructed, but cooler" << std::endl;
}

FragTrap::FragTrap(FragTrap& other) : ClapTrap(other)
{
    std::cout << "Copy constructor called" << std::endl;
    setName(other.getName());
    setEnergyPoint(other.getEnergyPoint());
    setHitPoint(other.getHitPoint());
    setAttackDamage(other.getAttackDamage());
}

FragTrap& FragTrap::operator=(FragTrap& other)
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

void FragTrap::highFivesGuys(void)
{
    std::cout << "leeeet's go man !!! High Five ? " << std::endl;
}
