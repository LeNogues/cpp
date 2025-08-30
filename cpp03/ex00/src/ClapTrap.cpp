/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 10:50:45 by seb               #+#    #+#             */
/*   Updated: 2025/06/25 20:01:20 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ClapTrap.hpp"

void    ClapTrap::attack(const std::string &target)
{
    if (energyPoint > 0 && hitPoint > 0)
    {
        std::cout << name << " attacked " << target << " for " << attackDamage << " damage" << std::endl;
        energyPoint -= 1;
        return ;
    }
    if (energyPoint <= 0)
        std::cout << name << " not enough energy point to attack" << std::endl;
    else
        std::cout << name << " is dead, we are not doing Zombies here..." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int ammount)
{
    if (ammount == 0)
        return ;
    if (energyPoint > 0 && hitPoint > 0)
    {
        hitPoint += ammount;
        energyPoint -= 1;
        std::cout << name << " got healed for " << ammount << " and now has " << ammount << " hitPoint" << std::endl;
        return ;
    }
    if (energyPoint < 0)
        std::cout << name << " REPAIRED CANCEL, NOT ENOUGH ENERGY" << std::endl;
    else 
        std::cout << name << " is dead, you can't repare death..." << std::endl;
}

void    ClapTrap::takeDamage(unsigned int ammount)
{
    if (ammount == 0)
        return ;
    hitPoint -= ammount;
    if (hitPoint <= 0)
        std::cout << name << " is DEAD, RIP little guy" << std::endl;
    else
        std::cout << name << " took " << ammount << " damage, hitPoints are now " << hitPoint << std::endl;
}


ClapTrap::ClapTrap(std::string n)
{
    name = n;
    energyPoint = 10;
    hitPoint = 10;
    attackDamage = 10;
    std::cout << name << " got constructed" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->name = other.name;
    this->energyPoint = other.energyPoint;
    this->hitPoint = other.energyPoint;
    this->attackDamage = other.attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->energyPoint = other.energyPoint;
        this->hitPoint = other.energyPoint;
        this->attackDamage = other.attackDamage;
    }
    return (*this);
}


ClapTrap::~ClapTrap()
{
    std::cout << name << " got destructed" << std::endl;
}