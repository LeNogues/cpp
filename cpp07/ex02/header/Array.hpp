/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:26:01 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/25 20:29:54 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>

template < typename T>
class Array
{
    private:
            T* elements;
            size_t _size;
    public:
            Array();
            Array(int nb);
            size_t size() const;
            Array(const Array&);
            Array &operator=(const Array& other);
            T &operator[](size_t index);
            const T &operator[](size_t index) const; 
            ~Array();
};

template < typename T>
Array<T>::Array() : elements(NULL), _size(0)
{
}

template < typename T>
Array<T>::Array(int nb)
{
    elements = new T[nb]();
    _size = nb;
}

template < typename T>
Array<T>::Array(const Array& other)
{
    this->elements = new T[other._size];
    this->_size = other._size;
    for (size_t i = 0; i < this->_size; i++)
    {
        this->elements[i] = other.elements[i];
    }
}

template < typename T>
Array<T> &Array<T>::operator=(const Array& other)
{
    if (this != &other)
    {
        delete[] elements;
        this->elements = new T[other._size];
        this->_size = other._size;
        for (size_t i = 0; i < this->_size; i++)
        {
            this->elements[i] = other.elements[i];
        }
    }
    return (*this);
}

template < typename T>
T& Array<T>::operator[](size_t index)
{
    if (index < 0 || index >= _size)
        throw std::exception();
    return (elements[index]);
}

template < typename T>
const T& Array<T>::operator[](size_t index) const
{
    if (index < 0 || index >= _size)
        throw std::exception();
    return (elements[index]);
}

template < typename T>
Array<T>::~Array()
{
    delete[] elements;
}

template < typename T >
size_t Array<T>::size() const
{
    return (_size);
}


#endif