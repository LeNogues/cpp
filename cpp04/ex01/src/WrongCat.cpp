/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:29:06 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/07/29 12:32:07 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/WrongCat.hpp"

//canonical form ///////////////////////////////////////////////////////////////


WrongCat::WrongCat()
{
    this->setType("chouquette");
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(std::string name)
{
    this->setType(name);
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    this->type = other.type;
}

WrongCat& WrongCat::operator=(WrongCat& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

//canonical form ///////////////////////////////////////////////////////////////

//function /////////////////////////////////////////////////////////////////////

void WrongCat::makeSound() const
{
    std::cout << "miaou miaou" << std::endl;
}
