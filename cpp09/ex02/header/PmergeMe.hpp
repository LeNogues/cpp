/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:24:24 by seb               #+#    #+#             */
/*   Updated: 2025/09/04 13:34:42 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <vector>
# include <deque>
# include <cctype>
# include <cstdlib>
# include <limits>
# include <cerrno>
# include <algorithm>
# include <utility>
# include <sys/time.h>

class PmergeMe
{
    private:
        std::vector<int> _vector;
        std::deque<int>  _deque;

        // --- Fonctions décomposées pour l'insertion ---
        std::vector<int> generateJacobsthalIndices(size_t limit);

        template <typename Container>
        size_t performJacobsthalInsertion(Container& mainChain, const Container& pend, const std::vector<int>& jacob_indices);
        
        template <typename Container>
        void insertRemainingElements(Container& mainChain, const Container& pend, size_t startIndex);

        template <typename Container>
        void insertStrayElement(Container& mainChain, int strayValue, bool hasStray);

        // --- Fonctions principales de l'algorithme ---
        template <typename Container>
        void createSortedPairs(Container& sequence, std::vector<std::pair<int, int> >& pairs, int& strayValue, bool& hasStray);
        
        template <typename Container>
        Container createPendChain(const std::vector<std::pair<int, int> >& pairs, const Container& mainChain);
        
        template <typename Container>
        void insertPendElements(Container& mainChain, const Container& pend, int strayValue, bool hasStray);
        
        template <typename Container>
        void fordJohnsonSort(Container& sequence);

        
    public:
        PmergeMe();
        PmergeMe(const PmergeMe& other);
        PmergeMe& operator=(const PmergeMe& other);
        ~PmergeMe();

        void    Parsing(char **argv);
        void    SortVector();
        void    SortDeque();
        
        std::vector<int>& getVector();
        std::deque<int>& getDeque();
};

int     ErrorMessage(std::string message);


#endif