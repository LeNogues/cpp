/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:25:49 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/07/29 12:37:31 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "WrongAnimal.hpp"

#endif

class WrongCat : public WrongAnimal
{
    private:
        
    public:
            WrongCat();
            WrongCat(std::string name);
            ~WrongCat();
            WrongCat(const WrongCat&);
            WrongCat& operator=(WrongCat& other);
            void makeSound() const;
};