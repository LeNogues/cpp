/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 11:06:52 by seb               #+#    #+#             */
/*   Updated: 2025/07/23 14:50:04 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

int main(void)
{
    Zombie *z = newZombie("bertrand");
    if (!z)
        return (0);
    z->announce();
    randomChump("léon");
    randomChump("");
    delete(z);
}