/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 11:30:24 by seb               #+#    #+#             */
/*   Updated: 2025/06/25 20:04:49 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ClapTrap.hpp"

int main(void)
{
    ClapTrap bob("bob");
    ClapTrap seb("seb");
    ClapTrap empty("empty");

    empty = seb;
    
    bob.attack("seb");

    empty.attack("seb");
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
    seb.takeDamage(1);
    seb.beRepaired(10);
}