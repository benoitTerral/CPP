/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:50:04 by bterral           #+#    #+#             */
/*   Updated: 2022/09/14 16:59:29 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//range iterators

int main( void )
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	

	Span large = Span(10000);
	std::vector<int>	vect0(10001, 200);
	vect0[66] = 1000000;
	vect0[673] = -1000000;
	try
	{
		large.bulk_add(vect0.begin(), vect0.end());
	}
	catch (Span::vectorIsFullException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << large.shortestSpan() << std::endl;
	std::cout << large.longestSpan() << std::endl;

	Span medium = Span(100);
	std::vector<int>	vect1(100, 9);
	vect1[66] = -10;
	try
	{
		medium.bulk_add(vect1.begin(), vect1.end());
	}
	catch (Span::vectorIsFullException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << medium.shortestSpan() << std::endl;
	std::cout << medium.longestSpan() << std::endl;
	
	return 0;
}