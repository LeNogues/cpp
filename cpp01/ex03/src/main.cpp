/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:56:01 by seb               #+#    #+#             */
/*   Updated: 2025/06/03 15:17:02 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Weapon.hpp"
#include "../HumanA.hpp"
#include "../HumanB.hpp"


int main()
{
    // Weapon club = Weapon("crude spiked club");
    // HumanA bob("Bob", club);
    // bob.attack();
    // club.setType("some other type of club");
    // bob.attack();

    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    return 0;
}