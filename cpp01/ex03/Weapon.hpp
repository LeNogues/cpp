/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:56:57 by seb               #+#    #+#             */
/*   Updated: 2025/06/03 14:48:34 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
    private :   std::string type;

    public :    Weapon(std::string newType);
                const std::string &getType(void) const;
                void        setType(std::string newType);
};

#endif