/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:19:44 by bterral           #+#    #+#             */
/*   Updated: 2022/09/28 09:53:31 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

//Constructors and destructor

WrongCat::WrongCat ( void )
{
	std::cout << GREEN << "WrongCat - default constructor called" << RESET << std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::~WrongCat ( void )
{
	std::cout << RED << "WrongCat - Destructor called" << RESET << std::endl;
}

WrongCat::WrongCat ( WrongCat const& copy)
{
	std::cout << BLUE << "WrongCat - Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

WrongCat&	WrongCat::operator= (const WrongCat& rhs)
{
	std::cout << YELLOW <<  "WrongCat - Assignment operator called" << RESET << std::endl;
	this->WrongAnimal::_type = rhs.WrongAnimal::getType();
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "MEOW !!" << std::endl;
	return ;
}