/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:17:22 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/26 11:14:43 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../header/Whatever.hpp"



int main()
{
    int firstInt = 10;
    int secondInt = 20;

    std::cout << "max: " << max(firstInt, secondInt) << std::endl;
    std::cout << "min: " << min(firstInt, secondInt) << std::endl;
    swap(firstInt, secondInt);
    std::cout << "firstInt: " << firstInt << std::endl;
    std::cout << "secondInt: " << secondInt << std::endl;

    double firstDouble = 100.50;
    double secondDouble = 20.50;

    std::cout << "max: " << max(firstDouble, secondDouble) << std::endl;
    std::cout << "min: " << min(firstDouble, secondDouble) << std::endl;
    swap(firstDouble, secondDouble);
    std::cout << "firstDouble: " << firstDouble << std::endl;
    std::cout << "secondDouble: " << secondDouble << std::endl;
}