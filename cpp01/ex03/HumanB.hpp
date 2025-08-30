/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:56:55 by seb               #+#    #+#             */
/*   Updated: 2025/07/23 16:08:50 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private :   std::string name;
                Weapon      *weaponType;

    public :    HumanB(std::string newName);
                ~HumanB();
                void        attack();
                void        setWeapon(Weapon &newWeapon);
    
};