/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 19:10:01 by seb               #+#    #+#             */
/*   Updated: 2025/07/23 16:07:59 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
    private :   void    debug(void);
                void    info(void);
                void    warning(void);
                void    error(void);

    public :    Harl();
                ~Harl();
                void    complain(std::string level);
};