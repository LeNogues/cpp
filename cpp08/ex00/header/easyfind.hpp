/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:48:25 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/29 16:14:19 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <algorithm>

template < typename T>
typename T::iterator easyfind(T &value, int nb)
{
    typename T::iterator it = find(value.begin(), value.end(), nb);
    if (it != value.end())
        return (it);
    else
        throw std::runtime_error("value not in container");
}
