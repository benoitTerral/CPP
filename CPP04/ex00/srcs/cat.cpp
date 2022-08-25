/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:19:44 by bterral           #+#    #+#             */
/*   Updated: 2022/08/25 15:47:58 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

//Constructors and destructor

Cat::Cat ( void )
{
	std::cout << GREEN << "Cat - default constructor called" << RESET << std::endl;
	this->_type = "Cat";
	return ;
}

// Cat::Cat ( std::string type) : _type(type)
// {
// 	std::cout << GREEN << "Cat - name constructor called" << RESET << std::endl;
// }

Cat::~Cat ( void )
{
	std::cout << RED << "Cat - Destructor called" << RESET << std::endl;
}

Cat::Cat ( Cat const& copy)
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