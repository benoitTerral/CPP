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

Animal::Animal ( void )
{
	std::cout << GREEN << "Animal - default constructor called" << RESET << std::endl;
	return ;
}

Animal::~Animal ( void )
{
	std::cout << RED << "Animal - Destructor called" << RESET << std::endl;
}

Animal::Animal ( Animal const& copy)
{
	std::cout << BLUE << "Animal - Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

Animal&	Animal::operator= (const Animal& rhs)
{
	std::cout << YELLOW <<  "Animal - Assignment operator called" << RESET << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

void	Animal::makeSound( void ) const
{
	std::cout << "ANIMAL NOISES !!" << std::endl;
	return ;
}

//getters

std::string	Animal::getType( void ) const
{
	return this->_type;
}