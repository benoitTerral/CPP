/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:02:30 by bterral           #+#    #+#             */
/*   Updated: 2022/09/27 13:37:28 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

int main( void )
{
	Animal	*petShop[4];

	std::cout << BOLDYELLOW << "		CREATE AND DESTROY ANIMAL ARRAY		" << RESET << std::endl;
	for (int i = 0; i < 2; i++)
		petShop[i] = new Dog();
	for (int i = 2; i < 4; i++)
		petShop[i] = new Cat();
	for (int i = 0; i < 4; i++)
		delete petShop[i];

	std::cout << std::endl << BOLDYELLOW << "	IDEAS AND DEEP COPIES		" << RESET << std::endl;
	{
		Cat	*first = new Cat();
		first->getBrain()->setIdea(0, "kill a bird");
		first->getBrain()->setIdea(1, "kill a mouse");
		Cat	surchage = *first;
		Cat	copy( *first );
		delete first;
		std::cout << copy.getBrain()->getIdea(0) << std::endl;
		std::cout << copy.getBrain()->getIdea(1) << std::endl;
		std::cout << surchage.getBrain()->getIdea(0) << std::endl;
		std::cout << surchage.getBrain()->getIdea(1) << std::endl;
	}
	
	std::cout << std::endl << BOLDYELLOW << "	CORRECTION TEST		" << RESET << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	basic.getBrain()->setIdea(0, "hello world");
	std::cout << basic.getBrain()->getIdea(0) << std::endl;

	return (0);
}