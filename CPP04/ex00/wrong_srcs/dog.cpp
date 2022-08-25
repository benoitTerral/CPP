/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongDog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:29:59 by bterral           #+#    #+#             */
/*   Updated: 2022/08/25 15:47:36 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

//Constructors and destructor

wrongDog::wrongDog ( void )
{
	std::cout << GREEN << "wrongDog - default constructor called" << RESET << std::endl;
	this->_type = "wrongDog";
	return ;
}

// wrongDog::wrongDog ( std::string type) : _type(type)
// {
// 	std::cout << GREEN << "wrongDog - name constructor called" << RESET << std::endl;
// }

wrongDog::~wrongDog ( void )
{
	std::cout << RED << "wrongDog - Destructor called" << RESET << std::endl;
}

wrongDog::wrongDog ( wrongDog const& copy)
{
	std::cout << BLUE << "wrongDog - Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

wrongDog&	wrongDog::operator= (const wrongDog& rhs)
{
	std::cout << YELLOW <<  "wrongDog - Assignment operator called" << RESET << std::endl;
	this->Animal::_type = rhs.Animal::getType();
	return (*this);
}

void	wrongDog::makeSound( void ) const
{
	std::cout << "BARK BARK !!" << std::endl;
	return ;
}