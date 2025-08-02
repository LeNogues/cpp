/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:14:53 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/07/28 11:54:50 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Animal.hpp"

#endif

class Cat : public Animal
{
    private:
        
    public:
            Cat();
            Cat(std::string name);
            ~Cat();
            Cat(const Cat&);
            Cat& operator=(Cat& other);
            void makeSound() const;
};
