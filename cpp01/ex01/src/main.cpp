/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:30:07 by seb               #+#    #+#             */
/*   Updated: 2025/08/22 17:18:31 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

int main(void)
{
    Zombie *horde;

    horde = zombieHorde(-15, "bertrand");
    if (!horde)
        return (0);
    for(int i = 0; i < 15; i++)
        horde[i].announce();
    delete[] horde;
}