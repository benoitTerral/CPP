/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:50:04 by bterral           #+#    #+#             */
/*   Updated: 2022/10/04 17:22:34 by bterral          ###   ########.fr       */
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

	std::cout << std::endl << "Constant iterator MutantStack" << std::endl;
	const	MutantStack<int>cmstack(mstack);
	MutantStack<int>::const_iterator cit = mstack.cbegin();
	MutantStack<int>::const_iterator cite = mstack.cend();
	while (cit != cite)
	{
		std::cout << *cit << std::endl;
		++cit;
	}
	std::cout << std::endl << "Constant iterator list" << std::endl;
	const	std::list<int>clist0(list0);
	std::list<int>::const_iterator	cit0 = clist0.cbegin();
	std::list<int>::const_iterator	cite0 = clist0.cend();
	while (cit0 != cite0)
	{
		std::cout << *cit0 << std::endl;
		++cit0;
	}

	std::cout << std::endl << "Constant reverse iterator MutantStack" << std::endl;
	MutantStack<int>::const_reverse_iterator crit = mstack.crbegin();
	MutantStack<int>::const_reverse_iterator crite = mstack.crend();
	while (crit != crite)
	{
		std::cout << *crit << std::endl;
		++crit;
	}
	std::cout << std::endl << "Constant reverse iterator list" << std::endl;
	std::list<int>::const_reverse_iterator	crit0 = clist0.crbegin();
	std::list<int>::const_reverse_iterator	crite0 = clist0.crend();
	while (crit0 != crite0)
	{
		std::cout << *crit0 << std::endl;
		++crit0;
	}

	
	return 0;
}