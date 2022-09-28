/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:29:59 by bterral           #+#    #+#             */
/*   Updated: 2022/09/28 15:13:06 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Animal.h"

//Constructors and destructor

Dog::Dog ( void ): AAnimal("Dog")
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

Dog::Dog ( Dog const& copy): AAnimal("Dog")
{
	std::cout << BLUE << "Dog - Copy constructor called" << RESET << std::endl;
	this->_brain = new Brain(*copy._brain);
	return ;
}

Dog&	Dog::operator= (const Dog& rhs)
{
	std::cout << YELLOW <<  "Dog - Assignment operator called" << RESET << std::endl;
	if (this == &rhs)
		return (*this);
	this->AAnimal::_type = rhs.AAnimal::getType();
	if (!this->_brain)
		this->_brain = new Brain();
	*(this->_brain) = rhs.getBrain();
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "BARK BARK !!" << std::endl;
	return ;
}

Brain&	Dog::getBrain( void ) const
{
	return (*this->_brain);
}