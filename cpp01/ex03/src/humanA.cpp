/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:57:06 by seb               #+#    #+#             */
/*   Updated: 2025/06/03 14:49:58 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &newWeapon) 
    :name(newName), weaponType(newWeapon)
{
    
}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weaponType.getType() << std::endl;
}