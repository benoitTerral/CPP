/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:02:30 by bterral           #+#    #+#             */
/*   Updated: 2022/09/28 10:00:05 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

int main( void ) 
{
	const	WrongAnimal*	meta = new WrongAnimal();
	const	WrongAnimal*	i = new WrongCat();
	const	WrongCat*		j = new WrongCat();	
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound(); //will output animal noise
	j->makeSound(); //will output cat noise
	meta->makeSound();
	delete	meta;
	delete	i;
	delete	j;
	return 0;
}