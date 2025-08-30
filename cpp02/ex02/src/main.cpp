/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 13:12:28 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/06/25 19:00:01 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed b;
    Fixed const constA( 54);
    Fixed const constB( 42.42f );
    Fixed const d( b );
    a = Fixed( 10.5f );
    b = Fixed(10.2f);
    int result;

    std::cout << std::endl;
    std::cout << "min entre a = "<< a << " et b = "<< b << " " <<Fixed::min(a, b) << std::endl;
    std::cout << "max entre a = "<< a << " et b = "<< b << " " <<Fixed::max(a, b) << std::endl;
    std::cout << std::endl;
    std::cout << "min entre constA = "<< constA << " et constB = "<< constB << " " <<Fixed::min(constA, constB) << std::endl;
    std::cout << "max entre constA = "<< constA << " et constB = "<< constB << " " <<Fixed::max(constA, constB) << std::endl;
    std::cout << std::endl;
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    std::cout << a << " * " << b << " = " << a * b << std::endl;
    std::cout << a << " / " << b << " = " << a / b << std::endl;
    std::cout << std::endl;
    std::cout << "a is " << a << std::endl;
    std::cout << "++a is " << ++a << std::endl;
    std::cout << "a++ is " << a++ << std::endl;
    std::cout << "a is " << a << std::endl;
    std::cout << "--a is " << --a << std::endl;
    std::cout << "a-- is " << a-- << std::endl;
    std::cout << "a is " << a << std::endl;
    std::cout << std::endl;
    result = a < b;
    std::cout << a << " < " << b << " = " << result << std::endl;
    result = a > b;
    std::cout << a << " > " << b << " = " << result << std::endl;
    result = a <= b;
    std::cout << a << " <= " << b << " = " << result << std::endl;
    result = a >= b;
    std::cout << a << " >= " << b << " = " << result << std::endl;
    result = a == b;
    std::cout << a << " == " << b << " = " << result << std::endl;
    result = a != b;
    std::cout << a << " != " << b << " = " << result << std::endl;
    std::cout << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}

// int main( void )
// {
//     Fixed a;
//     Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//     std::cout << a << std::endl;
//     std::cout << ++a << std::endl;
//     std::cout << a << std::endl;
//     std::cout << a++ << std::endl;
//     std::cout << a << std::endl;
//     std::cout << b << std::endl;
//     std::cout << Fixed::max( a, b ) << std::endl;
//     return 0;
// }

std::ostream& operator<<(std::ostream &out,const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}
