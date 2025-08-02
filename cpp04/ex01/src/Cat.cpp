/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:13:08 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/07/29 16:20:25 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Cat.hpp"

//canonical form ///////////////////////////////////////////////////////////////

Cat::Cat()
{
    this->setType("chat");
    cerveau = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(std::string name)
{
    this->setType(name);
    cerveau = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    delete cerveau;
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = other.type;
    this->cerveau = new Brain(*other.cerveau);
}

Cat& Cat::operator=(Cat& other)
{
    if (this != &other)
    {
        this->type = other.type;
        delete this->cerveau;
        this->cerveau = new Brain(*other.cerveau);
    }
    return (*this);
}

//canonical form ///////////////////////////////////////////////////////////////

//function /////////////////////////////////////////////////////////////////////

void Cat::makeSound() const
{
    std::cout << "miaou" << std::endl;
}

Brain* Cat::getBrain() const
{
    return this->cerveau;
}
