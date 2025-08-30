/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:48:29 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/26 11:57:33 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/easyfind.hpp"
#include <vector>
#include <deque>

int main()
{
    // --- TEST 1: Avec std::vector<int> ---
    std::cout << "--- Testing with std::vector<int> ---" << std::endl;
    std::vector<int> myvector;
    for (int i = 1; i <= 5; ++i) myvector.push_back(i * 10); // myvector contient {10, 20, 30, 40, 50}

    // Cas où l'élément est trouvé
    try
    {
        std::cout << "Searching for value 30... ";
        std::vector<int>::iterator result = easyfind(myvector, 30);
        std::cout << "Found! The value is: " << *result << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    // Cas où l'élément N'EST PAS trouvé
    try
    {
        std::cout << "Searching for value 99... ";
        std::vector<int>::iterator result = easyfind(myvector, 99);
        std::cout << "Found! The value is: " << *result << std::endl; // Cette ligne ne devrait pas s'exécuter
    }
    catch (const std::exception &e)
    {
        // On s'attend à attraper l'exception ici
        std::cerr << "SUCCESS: Correctly caught exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;


    // --- TEST 2: Avec std::list<int> ---
    std::cout << "--- Testing with std::list<int> ---" << std::endl;
    std::list<int> mylist;
    mylist.push_back(5);
    mylist.push_back(15);
    mylist.push_back(25); // mylist contient {5, 15, 25}

    // Cas où l'élément est trouvé
    try
    {
        std::cout << "Searching for value 15... ";
        std::list<int>::iterator result = easyfind(mylist, 15);
        std::cout << "Found! The value is: " << *result << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    // Cas où l'élément N'EST PAS trouvé
    try
    {
        std::cout << "Searching for value 100... ";
        easyfind(mylist, 100);
    }
    catch (const std::exception &e)
    {
        std::cerr << "SUCCESS: Correctly caught exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;


    // --- TEST 3: Avec std::deque<int> (un autre type de conteneur) ---
    std::cout << "--- Testing with std::deque<int> ---" << std::endl;
    std::deque<int> mydeque;
    mydeque.push_front(100);
    mydeque.push_back(200);
    mydeque.push_front(0); // mydeque contient {0, 100, 200}
    
    // Cas où l'élément est trouvé (le premier élément)
    try
    {
        std::cout << "Searching for value 0... ";
        std::deque<int>::iterator result = easyfind(mydeque, 0);
        std::cout << "Found! The value is: " << *result << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}