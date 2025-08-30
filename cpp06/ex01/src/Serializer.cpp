/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 13:44:33 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/25 14:06:09 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Serializer.hpp"

Serializer::Serializer()
{

}

Serializer::~Serializer()
{

}

Serializer::Serializer(const Serializer&)
{
    
}

Serializer& Serializer::operator=(const Serializer& other)
{
    if (this != &other)
    {
        *this = other;
    }
    return (*this);
}


uintptr_t Serializer::serialize(Data* data)
{
    return (reinterpret_cast<uintptr_t>(data));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}




