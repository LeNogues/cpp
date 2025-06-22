/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:45:21 by seb               #+#    #+#             */
/*   Updated: 2025/06/02 11:13:16 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../zombie.hpp"

Zombie::Zombie(std::string n)
{
    name = n;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}