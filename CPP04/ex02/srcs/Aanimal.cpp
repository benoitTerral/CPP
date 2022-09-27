/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clapTrap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:32:55 by bterral           #+#    #+#             */
/*   Updated: 2022/08/23 15:22:04 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

//Constructors and destructor

AAnimal::AAnimal ( void )
{
	std::cout << GREEN << "AAnimal - default constructor called" << RESET << std::endl;
	return ;
}

AAnimal::~AAnimal ( void )
{
	std::cout << RED << "AAnimal - Destructor called" << RESET << std::endl;
}

AAnimal::AAnimal ( AAnimal const& copy)
{
	std::cout << BLUE << "AAnimal - Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

AAnimal&	AAnimal::operator= (const AAnimal& rhs)
{
	std::cout << YELLOW <<  "AAnimal - Assignment operator called" << RESET << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

void	AAnimal::makeSound( void ) const
{
	std::cout << "ANIMAL NOISES !!" << std::endl;
	return ;
}

//getters

std::string	AAnimal::getType( void ) const
{
	return this->_type;
}