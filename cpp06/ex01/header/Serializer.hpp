/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 13:44:35 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/23 18:20:57 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
#include <iostream>
#include "Data.hpp"
#include <stdint.h>

class Serializer
{
    private:
    
    public:
        Serializer();
        ~Serializer();
        Serializer(const Serializer&);
        Serializer& operator=(const Serializer& other);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif
