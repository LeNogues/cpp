/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:12:41 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/07/23 16:35:35 by sle-nogu         ###   ########.fr       */
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
		
		// debut surcharge
	    Fixed& 			operator=(const Fixed& other);
		bool 			operator>(const Fixed& other) const;
		bool 			operator<(const Fixed& other) const;
		bool 			operator<=(const Fixed& other) const;
		bool 			operator>=(const Fixed& other) const;
		bool 			operator==(const Fixed& other) const;
		bool 			operator!=(const Fixed& other) const;
				
		Fixed 			operator+(const Fixed& other) const;
		Fixed 			operator-(const Fixed& other) const;
		Fixed 			operator*(const Fixed& other) const;
		Fixed 			operator/(const Fixed& other) const;
				
		float 			operator++(int);
		float 			operator--(int);
		Fixed   		operator++(void);
		Fixed			operator--(void);
		// fin surcharge
		
		static Fixed	min(const Fixed& nb1, const Fixed& nb2);
		static Fixed	min(Fixed& nb1, Fixed& nb2);
		static Fixed	max(const Fixed& nb1, const Fixed& nb2);
		static Fixed	max(Fixed& nb1, Fixed& nb2);
		
	    ~Fixed();
		
	    int     		getRawBits(void) const;
	    void			setRawBits(int const raw);
	    float			toFloat(void) const;
	    int				toInt(void) const;
};

std::ostream& operator<<(std::ostream &out,const Fixed &fixed);

