/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:38:14 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/07/28 11:58:21 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Dog.hpp"

//canonical form ///////////////////////////////////////////////////////////////

Dog::Dog()
{
    this->setType("cassie");
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(std::string name)
{
    this->setType(name);
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = other.type;
}

Dog& Dog::operator=(Dog& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

//canonical form ///////////////////////////////////////////////////////////////

//function /////////////////////////////////////////////////////////////////////

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}
