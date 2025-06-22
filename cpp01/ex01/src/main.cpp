/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:30:07 by seb               #+#    #+#             */
/*   Updated: 2025/06/03 10:24:18 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

int main(void)
{
    Zombie *horde;

    horde = zombieHorde(5, "bertrand");
    if (!horde)
        return (0);
    for(int i = 0; i < 5; i++)
        horde[i].announce();
    delete[] horde;
}