/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:01:08 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/29 15:20:06 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() {}
        MutantStack(MutantStack const& other) : std::stack<T>(other) {}
        MutantStack& operator=(MutantStack const& other)
        {
            if (this != &other)
            {
                std::stack<T>::operator=(other);
            }
            return (*this);
        }
        ~MutantStack(){}

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        iterator    begin()
        {
            return (this->c.begin());
        }
        iterator    end()
        {
            return (this->c.end());
        }

        const_iterator   begin() const
        {
            return (this->c.begin());
        }
        const_iterator    end() const
        {
            return (this->c.end());
        }

        reverse_iterator   rbegin()
        {
            return (this->c.rbegin());
        }
        reverse_iterator    rend()
        {
            return (this->c.rend());
        }

        const_reverse_iterator    rbegin() const
        {
            return (this->c.rbegin());
        }
        const_reverse_iterator    rend() const
        {
            return (this->c.rend());
        }
};
