/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 11:52:29 by seb               #+#    #+#             */
/*   Updated: 2025/06/06 12:26:18 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap :  public ClapTrap
{
    private :
                
    public :    ScavTrap(std::string n);
                ~ScavTrap();
                void    attack(const std::string &target);
                void    guardGate(void);
};