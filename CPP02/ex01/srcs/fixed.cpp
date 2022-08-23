/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:32:55 by bterral           #+#    #+#             */
/*   Updated: 2022/08/23 15:26:41 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed( void )
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
	this->setRawBits(0);
	return ;
}

Fixed::Fixed ( const int value )
{
	std::cout << GREEN << "Int constructor called" << RESET << std::endl;
	this->setRawBits(value << )
}

Fixed::Fixed ( const float value )
{
	std::cout << GREEN << "Int constructor called" << RESET << std::endl;
	this->_integer = value;
	return ;
}

Fixed::~Fixed ( void )
{
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

Fixed::Fixed ( Fixed const& copy)
{
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

Fixed&	Fixed::operator= (const Fixed& rhs)
{
	std::cout << YELLOW <<  "Copy assignment operator called" << RESET << std::endl;
	this->_integer = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_integer);
}

void	Fixed::setRawBits( int const raw )
{
	this->_integer = raw;
	return ;
}

std::ostream& operator<<(std::ostream out, Fixed const& rhs)
{
	
}