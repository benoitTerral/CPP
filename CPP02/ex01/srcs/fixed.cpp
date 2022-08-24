/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:32:55 by bterral           #+#    #+#             */
/*   Updated: 2022/08/24 11:15:48 by bterral          ###   ########.fr       */
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
	this->setRawBits(value << this->_factrional_bit);

}

Fixed::Fixed ( const float value )
{
	std::cout << GREEN << "Float constructor called" << RESET << std::endl;
	this->setRawBits((int)roundf(value * (1 << this->_factrional_bit)));
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
	return (this->_integer);
}

void	Fixed::setRawBits( int const raw )
{
	this->_integer = raw;
	return ;
}

float	Fixed::toFloat( void ) const
{
	// float	float_value;

	// float_value = (float)(this->_integer / (1 << this->_factrional_bit));
	// return (float_value);
	return ((float)(this->_integer) / (1 << this->_factrional_bit));
}

int		Fixed::toInt( void ) const
{
	return (this->_integer >> this->_factrional_bit);
}

std::ostream& operator<<(std::ostream& out, Fixed const& rhs)
{
	out << rhs.toFloat();
	return (out);
}