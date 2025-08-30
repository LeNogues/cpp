/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:10:59 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/26 14:12:36 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>

template < typename U >
void showValue(const U& value)
{
    std::cout << value << std::endl;
}

template < typename T, typename U >
void   iter(T* array, unsigned int length, void (*func)(U&))
{
    for (unsigned int i = 0; i < length; i++)
        func(array[i]);
}

template < typename T, typename U >
void   iter(const T* array, unsigned int length, void (*func)(const U&))
{
    for (unsigned int i = 0; i < length; i++)
        func(array[i]);
}

template < typename T, typename U >
void   iter(T* array, unsigned int length, void (*func)(const U&))
{
    for (unsigned int i = 0; i < length; i++)
        func(array[i]);
}

#endif