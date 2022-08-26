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

#include "wrongAnimal.h"

//Constructors and destructor

WrongAnimal::WrongAnimal ( void )
{
	std::cout << GREEN << "WrongAnimal - default constructor called" << RESET << std::endl;
	return ;
}

// WrongAnimal::WrongAnimal ( std::string type) : _type(type)
// {
// 	std::cout << GREEN << "WrongAnimal - name constructor called" << RESET << std::endl;
// }

WrongAnimal::~WrongAnimal ( void )
{
	std::cout << RED << "WrongAnimal - Destructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal ( WrongAnimal const& copy)
{
	std::cout << BLUE << "WrongAnimal - Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

WrongAnimal&	WrongAnimal::operator= (const WrongAnimal& rhs)
{
	std::cout << YELLOW <<  "WrongAnimal - Assignment operator called" << RESET << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "ANIMAL NOISES !!" << std::endl;
	return ;
}

//getters

std::string	WrongAnimal::getType( void ) const
{
	return this->_type;
}