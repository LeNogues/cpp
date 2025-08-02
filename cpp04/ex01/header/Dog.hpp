/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:13:57 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/07/28 12:32:14 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include "Animal.hpp"
#endif

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include "Brain.hpp"
#endif



class Dog : public Animal
{
    private:
            Brain *cerveau;
    public:
            Dog();
            Dog(std::string name);
            ~Dog();
            Dog(const Dog&);
            Dog& operator=(Dog& other);
            void makeSound() const;
            Brain*  getBrain() const;
};


