/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:29:59 by bterral           #+#    #+#             */
/*   Updated: 2022/09/28 11:59:17 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Animal.h"

//Constructors and destructor

Dog::Dog ( void ): Animal("Dog")
{
	std::cout << GREEN << "Dog - default constructor called" << RESET << std::endl;
	return ;
}

Dog::~Dog ( void )
{
	std::cout << RED << "Dog - Destructor called" << RESET << std::endl;
}

Dog::Dog ( Dog const& copy): Animal("Dog")
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