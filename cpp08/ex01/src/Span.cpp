/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:38:48 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/28 20:03:59 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../header/Span.hpp"

Span::Span(int size) : N(size)
{
    
}

Span::~Span()
{
    
}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        this->integers = other.integers;
        this->N = other.N;
    }
    return (*this);
}

Span::Span(const Span& other)
{
    this->integers = other.integers;
    this->N = other.N;
}

void    Span::addNumber(const int& nb)
{
    if (integers.size() < N)
        integers.push_back(nb);
    else
        throw std::exception();
}


int     Span::longestSpan() const
{
    int span;
    int min;
    int max;
    
    if (integers.size() < 2)
        throw std::exception();
    min = *std::min_element(integers.begin(), integers.end());
    max = *std::max_element(integers.begin(), integers.end());
    span = max - min;
    return (span);
}

int     Span::shortestSpan() const
{
    int min = std::numeric_limits<int>::max();
    
    if (integers.size() < 2)
        throw std::exception();
    std::vector<int> sorted_copy = integers;
    std::sort(sorted_copy.begin(), sorted_copy.end());
    for (unsigned long i = 0; i < sorted_copy.size() - 1; i++)
    {
        int span = sorted_copy[i + 1] - sorted_copy[i];
        if (span < min)
            min = span;
    }
    return (min);
}

void    Span::fillWithRandom(unsigned long nb)
{
    unsigned long i = 0;

    while(integers.size() < N || i < nb)
    {
        this->addNumber(rand());
        i++;
    }
}