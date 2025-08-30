/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:57:01 by seb               #+#    #+#             */
/*   Updated: 2025/06/03 14:50:10 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Weapon.hpp"

Weapon::Weapon(std::string newType)
{
       type = newType;
}

void Weapon::setType(std::string newType)
{
    type = newType;
}

const std::string &Weapon::getType() const
{
    return (type);
}