/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:19:44 by bterral           #+#    #+#             */
/*   Updated: 2022/08/25 15:51:19 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

//Constructors and destructor

wrongCat::wrongCat ( void )
{
	std::cout << GREEN << "wrongCat - default constructor called" << RESET << std::endl;
	this->_type = "wrongCat";
	return ;
}

// wrongCat::wrongCat ( std::string type) : _type(type)
// {
// 	std::cout << GREEN << "wrongCat - name constructor called" << RESET << std::endl;
// }

wrongCat::~wrongCat ( void )
{
	std::cout << RED << "wrongCat - Destructor called" << RESET << std::endl;
}

wrongCat::wrongCat ( wrongCat const& copy)
{
	std::cout << BLUE << "wrongCat - Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

wrongCat&	wrongCat::operator= (const wrongCat& rhs)
{
	std::cout << YELLOW <<  "wrongCat - Assignment operator called" << RESET << std::endl;
	this->Animal::_type = rhs.Animal::getType();
	return (*this);
}

void	wrongCat::makeSound( void ) const
{
	std::cout << "MEOW !!" << std::endl;
	return ;
}