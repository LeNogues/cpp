/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:36:40 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/02 11:04:48 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Animal.hpp"
//canonical form ///////////////////////////////////////////////////////////////

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = other.type;
}

Animal& Animal::operator=(Animal& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

//canonical form ///////////////////////////////////////////////////////////////


//function /////////////////////////////////////////////////////////////////////

void Animal::setType(std::string name)
{
    this->type = name;
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "*Animal sound i guess*" << std::endl;
}
