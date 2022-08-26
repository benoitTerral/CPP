/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:02:30 by bterral           #+#    #+#             */
/*   Updated: 2022/08/26 16:53:39 by bterral          ###   ########.fr       */
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
	// petShop[3]->Cat::getBrain()->setIdeas(0) = "Love your owner";
	for (int i = 0; i < 4; i++)
		delete petShop[i];

	std::cout << std::endl << BOLDYELLOW << "	IDEAS AND DEEP COPIES		" << RESET << std::endl;
	Cat	*first = new Cat();
	first->getBrain()->setIdea(0, "kill a bird");
	Cat	*surchage = first;
	Cat	copy( *first );
	delete first;
	// std::cout << copy.getBrain()->getIdea(0) << std::endl;
	std::cout << surchage->getBrain()->getIdea(0) << std::endl;
	(void)surchage;
	return (0);
}