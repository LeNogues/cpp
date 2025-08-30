/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:49:54 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/23 19:12:30 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/helpers.hpp"
#include "../header/A.hpp"
#include "../header/B.hpp"
#include "../header/C.hpp"
#include <iostream>

int main()
{
    Base* test = generate();
    std::cout << "identification pointeur : ";
    identify(test);
    std::cout << std::endl;
    std::cout << "identification reference: ";
    identify(*test);
    std::cout << std::endl;
    delete test;
}