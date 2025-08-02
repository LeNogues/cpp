/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 12:01:01 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/07/29 16:18:10 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Brain.hpp"

//canonical form ///////////////////////////////////////////////////////////////

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(Brain& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return (*this);
}

//canonical form ///////////////////////////////////////////////////////////////

void    Brain::setIdea(int pos, std::string idea)
{
    if (pos >=0 && pos <= 99)
        ideas[pos] = idea;
    else 
        std::cout << "bad index: limit is in [0; 99]" << std::endl;
}

std::string Brain::getIdea(int pos)
{
    return (ideas[pos]);
}