/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:22:55 by seb               #+#    #+#             */
/*   Updated: 2025/09/04 13:16:35 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/PmergeMe.hpp"

template <typename Container>
void printSequence(const Container& c, const std::string& message)
{
    std::cout << message;
    for (typename Container::const_iterator it = c.begin(); it != c.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Error: Not enough arguments." << std::endl;
        return 1;
    }

    PmergeMe pmergeme;
    try
    {
        pmergeme.Parsing(argv);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }

    printSequence(pmergeme.getVector(), "Before: ");
    
    struct timeval start_vec, end_vec;
    gettimeofday(&start_vec, NULL);
    pmergeme.SortVector();
    gettimeofday(&end_vec, NULL);
    
    long seconds_vec = end_vec.tv_sec - start_vec.tv_sec;
    long micros_vec = end_vec.tv_usec - start_vec.tv_usec;
    double time_vec = static_cast<double>(seconds_vec * 1000000 + micros_vec);

    printSequence(pmergeme.getVector(), "After:  ");

    struct timeval start_deq, end_deq;
    gettimeofday(&start_deq, NULL);
    pmergeme.SortDeque();
    gettimeofday(&end_deq, NULL);

    long seconds_deq = end_deq.tv_sec - start_deq.tv_sec;
    long micros_deq = end_deq.tv_usec - start_deq.tv_usec;
    double time_deq = static_cast<double>(seconds_deq * 1000000 + micros_deq);

    std::cout << "Time to process a range of " << argc - 1
              << " elements with std::vector : " << time_vec << " us" << std::endl;

    std::cout << "Time to process a range of " << argc - 1
              << " elements with std::deque  : " << time_deq << " us" << std::endl;

    return 0;
}