/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:19:44 by bterral           #+#    #+#             */
/*   Updated: 2022/09/28 11:59:12 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Animal.h"

//Constructors and destructor

Cat::Cat ( void ): Animal("Cat")
{
	std::cout << GREEN << "Cat - default constructor called" << RESET << std::endl;
	return ;
}

Cat::~Cat ( void )
{
	std::cout << RED << "Cat - Destructor called" << RESET << std::endl;
}

Cat::Cat ( Cat const& copy): Animal("Cat")
{
	std::cout << BLUE << "Cat - Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

Cat&	Cat::operator= (const Cat& rhs)
{
	std::cout << YELLOW <<  "Cat - Assignment operator called" << RESET << std::endl;
	this->Animal::_type = rhs.Animal::getType();
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "MEOW !!" << std::endl;
	return ;
}