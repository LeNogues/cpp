/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:57:04 by seb               #+#    #+#             */
/*   Updated: 2025/06/03 15:15:44 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HumanB.hpp"

HumanB::HumanB(std::string newName)
{
    name = newName;
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