/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:30:03 by seb               #+#    #+#             */
/*   Updated: 2025/06/03 09:55:32 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
    Zombie *horde;
    if (n <= 0)
        return (NULL);
    
    horde = new Zombie[n];
    for (int i = 0; i < n; i++)
        horde[i].set_name(name);
    return (horde);
}