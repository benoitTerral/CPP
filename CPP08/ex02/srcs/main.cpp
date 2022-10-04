/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:50:04 by bterral           #+#    #+#             */
/*   Updated: 2022/10/04 17:31:20 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/MutantStack.hpp"

int main( void )
{
	std::cout << "Simple Mutant Stack" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl << "Simple List" << std::endl;
	std::list<int> list0;
	list0.push_back(5);
	list0.push_back(17);
	std::cout << list0.back() << std::endl;
	list0.pop_back();
	std::cout << list0.size() << std::endl;
	list0.push_back(3);
	list0.push_back(5);
	list0.push_back(737);
	list0.push_back(0);
	std::list<int>::iterator	it0 = list0.begin();
	std::list<int>::iterator	ite0 = list0.end();
	++it0;
	--it0;
	while (it0 != ite0)
	{
		std::cout << *it0 << std::endl;
		++it0;
	}

	std::cout << std::endl << "Reverse iterator MutantStack" << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	std::cout << std::endl << "Reverse iterator list" << std::endl;
	std::list<int>::reverse_iterator	rit0 = list0.rbegin();
	std::list<int>::reverse_iterator	rite0 = list0.rend();
	while (rit0 != rite0)
	{
		std::cout << *rit0 << std::endl;
		++rit0;
	}
	
	return 0;
}