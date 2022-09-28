/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:02:30 by bterral           #+#    #+#             */
/*   Updated: 2022/09/28 14:54:41 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Animal.h"

int main( void )
{
	Dog		*snoopy = new Dog();
	Dog		*doggo = new Dog();
	// Dog		*idefix = new AAnimal(); //compilation fails

	*snoopy = *snoopy;
	snoopy->getBrain().setIdea(0, "yoooo");
	snoopy->getBrain().setIdea(1, "yoooo");
	snoopy->getBrain().setIdea(2, "yoooo");
	*doggo = *snoopy;

	delete snoopy;
	std::cout << doggo->getBrain().getIdea(0) << std::endl;
	std::cout << doggo->getBrain().getIdea(1) << std::endl;
	std::cout << doggo->getBrain().getIdea(2) << std::endl;
	delete doggo;


	return (0);
}

