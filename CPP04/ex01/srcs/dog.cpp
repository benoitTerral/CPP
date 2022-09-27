/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:29:59 by bterral           #+#    #+#             */
/*   Updated: 2022/09/27 13:23:08 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

//Constructors and destructor

Dog::Dog ( void )
{
	std::cout << GREEN << "Dog - default constructor called" << RESET << std::endl;
	this->_brain = new Brain();
	this->_type = "Dog";
	return ;
}

Dog::~Dog ( void )
{
	delete	this->_brain;
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
	this->_brain = new Brain();
	*(this->_brain) = *(rhs._brain);
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "BARK BARK !!" << std::endl;
	return ;
}

Brain*	Dog::getBrain( void ) const
{
	return (this->_brain);
}