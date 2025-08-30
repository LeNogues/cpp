/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 11:52:29 by seb               #+#    #+#             */
/*   Updated: 2025/06/25 21:01:14 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap :  public ClapTrap
{
    private :
                
    public :    ScavTrap(std::string n);
                ~ScavTrap();
                ScavTrap(ScavTrap&);
                ScavTrap& operator=(ScavTrap& other);
                void    attack(const std::string &target);
                void    guardGate(void);
};