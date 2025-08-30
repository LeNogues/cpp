/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:00:46 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/29 15:22:05 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "../header/MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top element: " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "Size after pop: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(42);

    std::cout << "\nIterating through MutantStack:" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "\nTesting copy constructor:" << std::endl;
    MutantStack<int> mstack_copy(mstack);
    MutantStack<int>::iterator it_copy = mstack_copy.begin();
    MutantStack<int>::iterator ite_copy = mstack_copy.end();
    while (it_copy != ite_copy)
    {
        std::cout << *it_copy << std::endl;
        ++it_copy;
    }

    std::cout << "\nTesting assignment operator:" << std::endl;
    MutantStack<int> mstack_assign;
    mstack_assign.push(42);
    mstack_assign.push(21);
    mstack_assign = mstack;
    for (MutantStack<int>::iterator it_assign = mstack_assign.begin(); it_assign != mstack_assign.end(); ++it_assign)
    {
        std::cout << *it_assign << std::endl;
    }
    
    std::cout << "\nUsing a standard stack with MutantStack:" << std::endl;
    std::stack<int> s(mstack);
    std::cout << "Top of std::stack copy: " << s.top() << std::endl;

    return 0;
}