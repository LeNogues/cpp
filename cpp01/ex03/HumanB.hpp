/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:56:55 by seb               #+#    #+#             */
/*   Updated: 2025/06/03 15:09:52 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private :   std::string name;
                Weapon      *weaponType;

    public :    HumanB(std::string newName);
                void        attack();
                void        setWeapon(Weapon &newWeapon);
    
};