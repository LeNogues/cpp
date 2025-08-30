/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:12:41 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/23 18:30:06 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include <cmath>

class Fixed
{
    private:
	    int value;
	    const static int fractPart = 8;
	
    public:
	    Fixed();
	    Fixed(const Fixed&);
	    Fixed(const int nb);
	    Fixed(const float nb);
	    Fixed& operator=(const Fixed& other);
	    ~Fixed();
	    int     getRawBits(void) const;
	    void	setRawBits(int const raw);
	    float	toFloat(void) const;
	    int		toInt(void) const;
};


