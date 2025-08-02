/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:04:32 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/07/28 11:50:55 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Animal
{
    protected : std::string type;

    private:
        
    public:
            Animal();
            virtual ~Animal();
            Animal(const Animal&);
            Animal& operator=(Animal& other);
            void            setType(std::string name);
            std::string     getType( ) const;
            virtual void            makeSound() const;
};
