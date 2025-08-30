/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 13:13:09 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/06/25 19:00:19 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Fixed.hpp"


Fixed::Fixed()
{
    value = 0;
}

Fixed::Fixed(const Fixed& other)
{
    *this = other;
}

Fixed::Fixed(const int nb)
{
    this->value = nb << fractPart;
}

Fixed::Fixed(const float nb)
{
    this->value = roundf(nb  * (1 << fractPart));
}

// operateur de comparaison //////////////////////////////////////

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
    {
        this->value = other.value;
    }
    return (*this);
}

bool Fixed::operator>(const Fixed& other) const
{
    if(this->toFloat() > other.toFloat())
    {
        return (1);
    }
    return (0);
}

bool Fixed::operator<(const Fixed& other) const
{
    if (this->toFloat() < other.toFloat())
    {
        return (true);
    }
    return (false);
}

bool Fixed::operator>=(const Fixed& other) const
{
    if (this->toFloat() >= other.toFloat())
    {
        return (true);
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
    return (false);
}

bool Fixed::operator<=(const Fixed& other) const
{
    if (this->toFloat() <= other.toFloat())
    {
        return (true);
    }
    return (false);
}

bool Fixed::operator==(const Fixed& other) const
{
    if (this->toFloat() == other.toFloat())
    {
        return (true);
    }
    return (false);
}

bool Fixed::operator!=(const Fixed& other) const
{
    if (this->toFloat() != other.toFloat())
    {
        return (true);
    }
    return (false);
}
// fin operateur de comparaison ///////////////////////////////////

// debut operateur arithmetique ///////////////////////////////////
Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed tmp = this->toFloat() + other.toFloat();
    return (tmp);
}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed tmp = this->toFloat() - other.toFloat();
    return (tmp);
}

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed tmp = this->toFloat() * other.toFloat();
    return (tmp);
}

Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed tmp = this->toFloat() / other.toFloat();
    return (tmp);
}

// fin operateur arithmetique /////////////////////////////////////

// debut operateur d incrementation ///////////////////////////////

float Fixed::operator++(int)
{
    Fixed tmp;

    tmp.value = this->value;
    this->value = this->value + (1 << fractPart);

    return (tmp.toFloat());
}

float Fixed::operator--(int)
{
    Fixed tmp;

    tmp.value = this->value;
    this->value = this->value - (1 << fractPart);
    
    return (tmp.toFloat());
}

Fixed Fixed::operator++(void)
{
    this->value = this->value + (1 << fractPart);

    return (*this);
}

Fixed Fixed::operator--(void)
{
    this->value = this->value - (1 << fractPart);
    
    return (*this);
}

// fin operateur d incrementation /////////////////////////////////

Fixed Fixed::min(const Fixed& nb1,const Fixed& nb2)
{
    if (nb1 < nb2)
        return (nb1);
    return (nb2);
}

Fixed Fixed::min(Fixed& nb1, Fixed& nb2)
{
    if (nb1 < nb2)
        return (nb1);
    return (nb2);
}

Fixed Fixed::max(const Fixed& nb1,const Fixed& nb2)
{
    if (nb1 < nb2)
        return (nb2);
    return (nb1);
}

Fixed Fixed::max(Fixed& nb1, Fixed& nb2)
{
    if (nb1 < nb2)
        return (nb2);
    return (nb1);
}

Fixed::~Fixed()
{
}

int     Fixed::getRawBits(void) const
{
    return value;
}

void    Fixed::setRawBits(int const raw)
{
    value = raw;
}

float   Fixed::toFloat(void) const
{
    return (static_cast<float>(this->value) / (1 << fractPart));
}

int   Fixed::toInt(void) const
{
    return (this->value / (1 << fractPart));
}


