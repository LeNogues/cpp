/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 12:14:40 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/07/29 13:05:48 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/Dog.hpp"
#include "header/Cat.hpp"
#include "header/WrongCat.hpp"
#include <iostream>

int main()
{
    const int num_animals = 10;
    Animal* animals[num_animals];

    for (int i = 0; i < num_animals; i++)
    {
        if (i < num_animals / 2)
        {
            animals[i] = new Dog();
        }
        else
        {
            animals[i] = new Cat();
        }
    }
    std::cout << "\n--- Testing sounds ---\n" << std::endl;
    for (int i = 0; i < num_animals; i++)
    {
        animals[i]->makeSound();
    }
    std::cout << "\n--- Testing deep copy ---\n" << std::endl;
    Dog basic;
    basic.getBrain()->setIdea(0, "I am the original dog");
    {
        Dog tmp = basic;
        std::cout << "\nOriginal dog's idea: " << basic.getBrain()->getIdea(0) << std::endl;
        std::cout << "Copied dog's idea:   " << tmp.getBrain()->getIdea(0) << std::endl;
        
        tmp.getBrain()->setIdea(0, "I am the copy");
        std::cout << "\n--- After modifying the copy's brain ---\n" << std::endl;

        std::cout << "Original dog's idea: " << basic.getBrain()->getIdea(0) << std::endl;
        std::cout << "Copied dog's idea:   " << tmp.getBrain()->getIdea(0) << std::endl;
        
        std::cout << "\n--- Copy (tmp) is about to be destroyed ---\n" << std::endl;
    }

    std::cout << "\n--- Original dog (basic) is still alive ---\n" << std::endl;
    std::cout << "Original dog's idea: " << basic.getBrain()->getIdea(0) << std::endl;

    std::cout << "\n--- Deleting the main array ---\n" << std::endl;
    for (int i = 0; i < num_animals; i++)
    {
        delete animals[i];
    }
    
    std::cout << "\n--- End of main ---" << std::endl;
    return 0;
}