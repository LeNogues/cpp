/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 11:30:24 by seb               #+#    #+#             */
/*   Updated: 2025/06/06 12:23:56 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ScavTrap.hpp"

int main(void)
{
    ScavTrap bob("bob");
    ClapTrap seb("seb");
    bob.attack("seb");
    bob.attack("seb");
    bob.attack("seb");
    bob.attack("seb");
    bob.attack("seb");
    bob.attack("seb");
    bob.attack("seb");
    bob.attack("seb");
    bob.attack("seb");
    bob.attack("seb");
    bob.attack("seb");
    bob.attack("seb");
    bob.attack("seb");
    bob.attack("seb");
    bob.attack("seb");
    bob.takeDamage(200);
    bob.beRepaired(10);
}