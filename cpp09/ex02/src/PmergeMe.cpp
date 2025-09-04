/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:24:23 by seb               #+#    #+#             */
/*   Updated: 2025/09/04 13:35:30 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/PmergeMe.hpp"

#pragma region Cannonical Form

PmergeMe::PmergeMe()
{
    
}

PmergeMe::~PmergeMe()
{
    
}

PmergeMe::PmergeMe(const PmergeMe& other) : 
    _vector(other._vector), _deque(other._deque)
{
    
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
    if (this != &other)
    {
        this->_deque = other._deque;
        this->_vector = other._vector;
    }
    return (*this);
}

#pragma endregion


#pragma region Member Function

template <typename Container>
void PmergeMe::createSortedPairs(Container& sequence, std::vector<std::pair<int, int> >& pairs, int& strayValue, bool& hasStray)
{
    if (sequence.size() % 2 != 0)
    {
        strayValue = sequence.back();
        hasStray = true;
        sequence.pop_back();
    }
    for (typename Container::iterator it = sequence.begin(); it != sequence.end(); )
    {
        int value1 = *it;
        std::advance(it, 1);
        int value2 = *it;
        std::advance(it, 1);
        
        std::pair<int, int> tmpPair;
        if (value1 > value2)
        {
            tmpPair.first = value2;
            tmpPair.second = value1;
        }
        else
        {
            tmpPair.first = value1;
            tmpPair.second = value2;
        }
        pairs.push_back(tmpPair);
    }
}

template <typename Container>
Container PmergeMe::createPendChain(const std::vector<std::pair<int, int> >& pairs, const Container& mainChain)
{
    std::vector<std::pair<int, int> > sorted_pairs;
    for (typename Container::const_iterator it_main = mainChain.begin(); it_main != mainChain.end(); ++it_main)
    {
        for (size_t i = 0; i < pairs.size(); ++i)
        {
            if (pairs[i].second == *it_main)
            {
                sorted_pairs.push_back(pairs[i]);
                break;
            }
        }
    }

    Container pend;
    for (size_t i = 0; i < sorted_pairs.size(); ++i)
    {
        pend.push_back(sorted_pairs[i].first);
    }
    return pend;
}

std::vector<int> PmergeMe::generateJacobsthalIndices(size_t limit)
{
    std::vector<int> indices;
    if (limit == 0) return indices;
    
    indices.push_back(0);
    indices.push_back(1);
    int last = 1, before_last = 1;
    while (static_cast<size_t>(last) < limit)
    {
        int next = last + 2 * before_last;
        indices.push_back(next);
        before_last = last;
        last = next;
    }
    return indices;
}

template <typename Container>
size_t PmergeMe::performJacobsthalInsertion(Container& mainChain, const Container& pend, const std::vector<int>& jacob_indices)
{
    size_t inserted_count = 1; 
    for (size_t i = 2; i < jacob_indices.size(); ++i)
    {
        size_t current_jacob_idx = jacob_indices[i];
        size_t prev_jacob_idx = jacob_indices[i-1];
        
        for (size_t j = current_jacob_idx; j > prev_jacob_idx; --j)
        {
            if (j - 1 < pend.size())
            {
                int element_to_insert = pend[j - 1];
                typename Container::iterator insertion_pos = std::lower_bound(mainChain.begin(), mainChain.end(), element_to_insert);
                mainChain.insert(insertion_pos, element_to_insert);
            }
        }
        inserted_count += current_jacob_idx - prev_jacob_idx;
        if (inserted_count > pend.size())
        {
            inserted_count = pend.size();
        }
    }
    return inserted_count;
}

template <typename Container>
void PmergeMe::insertRemainingElements(Container& mainChain, const Container& pend, size_t startIndex)
{
    for (size_t i = startIndex; i < pend.size(); ++i)
    {
        int element_to_insert = pend[i];
        typename Container::iterator insertion_pos = std::lower_bound(mainChain.begin(), mainChain.end(), element_to_insert);
        mainChain.insert(insertion_pos, element_to_insert);
    }
}

template <typename Container>
void PmergeMe::insertStrayElement(Container& mainChain, int strayValue, bool hasStray)
{
    if (hasStray)
    {
        typename Container::iterator insertion_pos = std::lower_bound(mainChain.begin(), mainChain.end(), strayValue);
        mainChain.insert(insertion_pos, strayValue);
    }
}

template <typename Container>
void PmergeMe::insertPendElements(Container& mainChain, const Container& pend, int strayValue, bool hasStray)
{
    if (pend.empty())
    {
        insertStrayElement(mainChain, strayValue, hasStray);
        return;
    }

    mainChain.insert(mainChain.begin(), pend[0]);

    std::vector<int> jacob_indices = generateJacobsthalIndices(pend.size());

    size_t inserted_count = performJacobsthalInsertion(mainChain, pend, jacob_indices);

    insertRemainingElements(mainChain, pend, inserted_count);

    insertStrayElement(mainChain, strayValue, hasStray);
}

template <typename Container>
void PmergeMe::fordJohnsonSort(Container& sequence)
{
    if (sequence.size() <= 1)
        return;

    std::vector<std::pair<int, int> > pairs;
    int strayValue;
    bool hasStray = false;

    createSortedPairs(sequence, pairs, strayValue, hasStray);

    Container mainChain;
    for (size_t i = 0; i < pairs.size(); ++i)
        mainChain.push_back(pairs[i].second);
    
    this->fordJohnsonSort(mainChain);

    Container pend = createPendChain(pairs, mainChain);
    
    insertPendElements(mainChain, pend, strayValue, hasStray);
    
    sequence = mainChain;
}

void PmergeMe::SortVector()
{
    this->fordJohnsonSort(this->_vector);
}

void PmergeMe::SortDeque()
{
    this->fordJohnsonSort(this->_deque);
}

std::vector<int>& PmergeMe::getVector() { return this->_vector; }
std::deque<int>& PmergeMe::getDeque() { return this->_deque; }

void    PmergeMe::Parsing(char **argv)
{
    int i = 1;
    errno = 0;

    while(argv[i])
    {
        char *endptr;
        long result = strtol(argv[i], &endptr, 10);
        if (endptr == argv[i] || *endptr != 0 || errno == ERANGE)
            throw std::runtime_error("ERROR: La liste ne doit comporter que des int");
        if (result < std::numeric_limits<int>::min())
            throw std::runtime_error("ERROR: la liste contient au moins un nombre inferieur a INTMIN");
        if (result > std::numeric_limits<int>::max())
            throw std::runtime_error("ERROR: la liste contient au moins un nombre superieur a INTMAX");
        std::vector<int>::iterator it = std::find(_vector.begin(), _vector.end(), result);
        if (it == _vector.end())
        {
            _vector.push_back(result);
            _deque.push_back(result);  
        }
        else
            throw std::runtime_error("ERROR: doublon interdit");

        i++;
    }
    
}

#pragma endregion

#pragma region Non-Member Function

int ErrorMessage(std::string message)
{
    std::cout << message << std::endl;
    return (0);
}

#pragma endregion