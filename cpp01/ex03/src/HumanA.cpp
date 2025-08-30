/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:57:06 by seb               #+#    #+#             */
/*   Updated: 2025/07/23 16:09:07 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &newWeapon) 
    :name(newName), weaponType(newWeapon)
{
    
}

HumanA::~HumanA()
{
    
}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weaponType.getType() << std::endl;
}