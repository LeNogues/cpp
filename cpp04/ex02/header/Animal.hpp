/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:04:32 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/28 17:15:00 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Animal
{
    protected : std::string type;
                Animal();

    public:
            virtual ~Animal();
            Animal(const Animal&);
            Animal& operator=(Animal& other);
            void            setType(std::string name);
            std::string     getType( ) const;
            virtual void            makeSound() const = 0;
};
