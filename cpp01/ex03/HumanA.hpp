/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:56:59 by seb               #+#    #+#             */
/*   Updated: 2025/07/23 16:08:36 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private :   std::string name;
                Weapon      &weaponType;

    public :    HumanA(std::string newName, Weapon &newWeapon);
                ~HumanA();
                void        attack();
};