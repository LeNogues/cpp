/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:59:13 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/07/28 12:44:10 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Animal.hpp"

#endif

class Brain
{
    private:
            std::string ideas[100];
        
    public:
            Brain();
            ~Brain();
            Brain(const Brain&);
            Brain& operator=(Brain& other);
            void        setIdea(int pos, std::string idea);
            std::string getIdea(int pos);
};

