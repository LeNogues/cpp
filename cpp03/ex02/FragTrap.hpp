/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:35:16 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/06/30 15:25:23 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "ClapTrap.hpp"

#endif
class FragTrap :  public ClapTrap
{
    private :
                
    public :    FragTrap(std::string n);
                ~FragTrap();
                FragTrap(FragTrap&);
                FragTrap& operator=(FragTrap& other);
                void    highFivesGuys(void);
};