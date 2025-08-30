/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:12:41 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/06/24 13:13:07 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>

class Fixed
{
    private:
            int value;
            const static int fractPart = 8;
        
    public:
            Fixed();
            Fixed(const Fixed&);
            Fixed& operator=(const Fixed& other);
            ~Fixed();
            int     getRawBits(void) const;
            void    setRawBits(int const raw);
};
