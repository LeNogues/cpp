/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:19:49 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/28 21:17:45 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Span.hpp"

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main()
{
	std::cout << "--- Test du sujet ---" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	std::cout << std::endl;

	std::cout << "--- Test des exceptions ---" << std::endl;
	Span sp_except = Span(3);
	sp_except.addNumber(1);
	sp_except.addNumber(2);
	sp_except.addNumber(3);
	try
	{
		sp_except.addNumber(4);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << '\n';
	}

	Span sp_no_span = Span(5);
	try
	{
		std::cout << sp_no_span.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << '\n';
	}
	sp_no_span.addNumber(42);
	try
	{
		std::cout << sp_no_span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << '\n';
	}
	std::cout << std::endl;


	std::cout << "--- Test avec un grand nombre d'éléments ---" << std::endl;
	const unsigned int big_n = 15000;
	Span sp_big = Span(big_n);
	std::vector<int> big_vector;
	big_vector.reserve(big_n);
	srand(time(NULL));
	for (unsigned int i = 0; i < big_n; ++i)
	{
		big_vector.push_back(rand());
	}

	sp_big.addRange(big_vector.begin(), big_vector.end());

	std::cout << "Test avec " << big_n << " nombres." << std::endl;
	std::cout << "Shortest span: " << sp_big.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp_big.longestSpan() << std::endl;
	std::cout << std::endl;

	std::cout << "--- Test d'ajout par plage d'itérateurs ---" << std::endl;
	Span sp_range = Span(10);
	std::vector<int> range_vec;
	range_vec.push_back(100);
	range_vec.push_back(200);
	range_vec.push_back(50);
	range_vec.push_back(150);
	sp_range.addRange(range_vec.begin(), range_vec.end());
	std::cout << "Shortest span: " << sp_range.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp_range.longestSpan() << std::endl;

	return 0;
}