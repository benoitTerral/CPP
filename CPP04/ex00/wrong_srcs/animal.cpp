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

wrongAnimal::wrongAnimal ( void )
{
	std::cout << GREEN << "wrongAnimal - default constructor called" << RESET << std::endl;
	return ;
}

// wrongAnimal::wrongAnimal ( std::string type) : _type(type)
// {
// 	std::cout << GREEN << "wrongAnimal - name constructor called" << RESET << std::endl;
// }

wrongAnimal::~wrongAnimal ( void )
{
	std::cout << RED << "wrongAnimal - Destructor called" << RESET << std::endl;
}

wrongAnimal::wrongAnimal ( wrongAnimal const& copy)
{
	std::cout << BLUE << "wrongAnimal - Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

wrongAnimal&	wrongAnimal::operator= (const wrongAnimal& rhs)
{
	std::cout << YELLOW <<  "wrongAnimal - Assignment operator called" << RESET << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

void	wrongAnimal::makeSound( void ) const
{
	std::cout << "ANIMAL NOISES !!" << std::endl;
	return ;
}

//getters

std::string	wrongAnimal::getType( void ) const
{
	return this->_type;
}