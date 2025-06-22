/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:33:51 by seb               #+#    #+#             */
/*   Updated: 2025/06/03 13:59:53 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
    private :   std::string name;

    public :    Zombie();
                void announce(void);
                void set_name(std::string newName);  
                
};

Zombie * zombieHorde(int N, std::string name);