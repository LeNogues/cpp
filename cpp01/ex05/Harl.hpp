/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 19:10:01 by seb               #+#    #+#             */
/*   Updated: 2025/06/03 19:15:19 by seb              ###   ########.fr       */
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
                void    complain(std::string level);
};