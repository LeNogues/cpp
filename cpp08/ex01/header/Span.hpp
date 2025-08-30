/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:20:01 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/28 21:18:08 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <iostream>
#include <limits>

class Span
{
    private:
            Span();
            std::vector<int> integers;
            unsigned int N;
    public:
            Span(int N);
            Span(const Span&);
            Span& operator=(const Span& other);
            ~Span();
            void        addNumber(const int& nb);
            int         shortestSpan() const;
            int         longestSpan() const; 
            void        fillWithRandom(unsigned long nb);
            template < typename InputIterator >
            void        addRange(InputIterator first, InputIterator last)
            {
                while(first != last)
                {
                        addNumber(*first);     
                        *first++;          
                }
            }
};
