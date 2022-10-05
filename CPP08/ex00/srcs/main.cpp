/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:50:04 by bterral           #+#    #+#             */
/*   Updated: 2022/10/05 11:06:15 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void )
{
	//vector
	std::vector<int>			vect;
	std::vector<int>::iterator	iter;

	vect.push_back(0);
	vect.push_back(1);
	vect.push_back(2);
	vect.pop_back();
	vect.push_back(3);
	iter = vect.end() - 1;
	vect.insert(iter, 2);
	std::cout << "Vector int" << std::endl;
	for (iter = begin (vect); iter != end (vect); iter++) { std::cout << *iter << ' '; };

	//list
	int							Array[] = {1, 2, 3, 4};
	std::list<int>				lst(Array, Array + sizeof(Array) / sizeof(int) );
	std::list<int>::iterator	it;

	std::cout << std::endl << "List int" << std::endl;
	for (it = lst.begin(); it != lst.end(); it++) { std::cout << *it << ' '; };
	std::cout << std::endl;


	//deque
	std::deque<int>				dqe;
	std::deque<int>::iterator	ite;

	try
	{
		std::cout << "Is 4 in vector: ";
		iter = easyfind(vect, 4);
		std::cout << *iter << std::endl;
	}
	catch(const notInContainerException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout << "Is 4 in list: ";
		it = easyfind(lst, 4);
		std::cout << *it << std::endl;
	}
	catch(const notInContainerException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "Is 4 in empty deque: ";
		ite = easyfind(dqe, 4);
		std::cout << *it << std::endl;
	}
	catch(const notInContainerException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	return (0);
}