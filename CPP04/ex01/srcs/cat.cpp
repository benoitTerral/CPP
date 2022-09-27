/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:19:44 by bterral           #+#    #+#             */
/*   Updated: 2022/09/27 13:22:55 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

//Constructors and destructor

Cat::Cat ( void )
{
	std::cout << GREEN << "Cat - default constructor called" << RESET << std::endl;
	this->_brain = new Brain();
	this->_type = "Cat";
	return ;
}

Cat::~Cat ( void )
{
	delete	this->_brain;
	std::cout << RED << "Cat - Destructor called" << RESET << std::endl;
}

Cat::Cat ( Cat const& copy)
{
	std::cout << BLUE << "Cat - Copy constructor called" << RESET << std::endl;
	this->_type = copy._type;
	this->_brain = new Brain();
	*(this->_brain) = *(copy._brain);
	return ;
}

Cat&	Cat::operator= (const Cat& rhs)
{
	std::cout << YELLOW <<  "Cat - Assignment operator called" << RESET << std::endl;
	this->Animal::_type = rhs.Animal::getType();
	// if (this->_brain)
	// 	delete (this->_brain);
	this->_brain = new Brain();
	// *(this->_brain) = *(rhs._brain);
	// this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(i, rhs.getBrain()->getIdea(i));
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "MEOW !!" << std::endl;
	return ;
}

Brain*	Cat::getBrain( void ) const
{
	return (this->_brain);
}