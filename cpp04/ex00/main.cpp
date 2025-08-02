/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:04:15 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/07/29 12:39:12 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/Cat.hpp"
#include "header/WrongCat.hpp"
#include "header/Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog("daika");
    const Animal* i = new Cat();
    const WrongAnimal* w = new WrongCat("test");
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    w->makeSound();
    delete meta;
    delete j;
    delete i;
    delete w;
    return 0;
}
