/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:21:28 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/26 11:12:52 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template< typename T >
T max(T const &x, T const &y)
{
    return (x > y ? x : y);
}

template< typename T >
T min(T const &x, T const &y)
{
    return (x < y ? x : y);
}

template< typename T >
void    swap(T &x, T &y)
{
    T temp;
    
    temp = x;
    x = y;
    y = temp;
}