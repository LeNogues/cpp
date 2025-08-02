/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 17:10:56 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/07/28 17:11:25 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class WrongAnimal
{
    protected : std::string type;

    private:
        
    public:
            WrongAnimal();
            virtual ~WrongAnimal();
            WrongAnimal(const WrongAnimal&);
            WrongAnimal& operator=(WrongAnimal& other);
            void            setType(std::string name);
            std::string     getType( ) const;
            void            makeSound() const;
};