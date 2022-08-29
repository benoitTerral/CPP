/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:29:59 by bterral           #+#    #+#             */
/*   Updated: 2022/08/29 13:22:31 by bterral          ###   ########.fr       */
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
	// this->_type = copy._type;
	// this->_brain = new Brain();
	// for (int i = 0; i < 100; i++)
	// 	this->_brain->ideas[i] = copy._brain->ideas[i];
	return ;
}

Dog&	Dog::operator= (const Dog& rhs)
{
	std::cout << YELLOW <<  "Dog - Assignment operator called" << RESET << std::endl;
	this->AAnimal::_type = rhs.AAnimal::getType();
	this->_brain = new Brain();
	*(this->_brain) = *(rhs._brain);
	// this->_brain = new Brain();
	// for (int i = 0; i < 100; i++)
	// 	this->_brain->ideas[i] = copy._brain->ideas[i];
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