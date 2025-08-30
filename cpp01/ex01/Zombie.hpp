/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:33:51 by seb               #+#    #+#             */
/*   Updated: 2025/07/23 16:41:47 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
    private :   std::string name;

    public :    Zombie();
                ~Zombie();
                void announce(void);
                void set_name(std::string newName);              
};

Zombie * zombieHorde(int N, std::string name);