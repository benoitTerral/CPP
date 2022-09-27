/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:29:59 by bterral           #+#    #+#             */
/*   Updated: 2022/09/27 13:16:57 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

//Constructors and destructor

Dog::Dog ( void )
{
	std::cout << GREEN << "Dog - default constructor called" << RESET << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::~Dog ( void )
{
	std::cout << RED << "Dog - Destructor called" << RESET << std::endl;
}

Dog::Dog ( Dog const& copy)
{
	std::cout << BLUE << "Dog - Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

Dog&	Dog::operator= (const Dog& rhs)
{
	std::cout << YELLOW <<  "Dog - Assignment operator called" << RESET << std::endl;
	this->Animal::_type = rhs.Animal::getType();
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "BARK BARK !!" << std::endl;
	return ;
}