/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:26:30 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/02 11:04:39 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/WrongAnimal.hpp"
//canonical form ///////////////////////////////////////////////////////////////

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    this->type = other.type;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

//canonical form ///////////////////////////////////////////////////////////////


//function /////////////////////////////////////////////////////////////////////

void WrongAnimal::setType(std::string name)
{
    this->type = name;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "*WrongAnimal sound i guess*" << std::endl;
}
