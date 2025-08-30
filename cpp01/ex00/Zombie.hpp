/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:41:44 by seb               #+#    #+#             */
/*   Updated: 2025/07/23 15:04:26 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
    private :
                std::string name;
                
    public : 
                Zombie(std::string n);
                ~Zombie();
                void announce(void);
};

Zombie* newZombie(std::string name);
void    randomChump( std::string name );
