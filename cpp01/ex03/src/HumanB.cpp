/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:57:04 by seb               #+#    #+#             */
/*   Updated: 2025/07/23 16:09:16 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HumanB.hpp"

HumanB::HumanB(std::string newName)
{
    name = newName;
}

HumanB::~HumanB()
{
    
}

void    HumanB::attack(void)
{
    if(weaponType->getType() == "")
        std::cout << name << " is not armed " << std::endl;
    else
        std::cout << name << " attacks with their " << weaponType->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &newWeapon)
{
    weaponType = &newWeapon;
}