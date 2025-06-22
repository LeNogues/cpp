/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:41:44 by seb               #+#    #+#             */
/*   Updated: 2025/06/02 11:09:18 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
    private :
                std::string name;
                
    public : 
                Zombie(std::string n);
                void announce(void);
};

Zombie* newZombie(std::string name);
void    randomChump( std::string name );

