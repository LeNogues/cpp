/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 11:30:24 by seb               #+#    #+#             */
/*   Updated: 2025/06/30 15:53:00 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ScavTrap.hpp"
#include "../FragTrap.hpp"

int main(void)
{
    ScavTrap scav("scav");
    ClapTrap clap("clap");
    FragTrap frag("frag");
    
    std::cout << std::endl;
    
    clap.attack("frag");
    frag.takeDamage(10);
    frag.beRepaired(10);
    scav.attack("frag");
    frag.takeDamage(100);
    frag.beRepaired(100);
    frag.attack("clap");
    clap.attack("frag");
    clap.attack("frag");
    clap.attack("frag");
    clap.attack("frag");
    clap.attack("frag");
    clap.attack("frag");
    clap.attack("frag");
    clap.attack("frag");
    clap.attack("frag");
    clap.attack("frag");
    clap.attack("frag");
    clap.beRepaired(2);
    
    std::cout << std::endl;
}