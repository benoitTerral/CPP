/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:32:55 by bterral           #+#    #+#             */
/*   Updated: 2022/08/24 15:08:38 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed( void )
{
	// std::cout << GREEN << "Default constructor called" << RESET << std::endl;
	this->setRawBits(0);
	return ;
}

Fixed::Fixed ( const int value )
{
	// std::cout << GREEN << "Int constructor called" << RESET << std::endl;
	this->setRawBits(value << this->_factrional_bit);

}

//EX01 constructor added - BEGINS

Fixed::Fixed ( const float value )
{
	// std::cout << GREEN << "Float constructor called" << RESET << std::endl;
	this->setRawBits((int)roundf(value * (1 << this->_factrional_bit)));
	return ;
}

Fixed::~Fixed ( void )
{
	// std::cout << RED << "Destructor called" << RESET << std::endl;
}

//EX01 constructor added - ENDS

Fixed::Fixed ( Fixed const& copy)
{
	// std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

Fixed&	Fixed::operator= (const Fixed& rhs)
{
	// std::cout << YELLOW <<  "Copy assignment operator called" << RESET << std::endl;
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

//EX01

float	Fixed::toFloat( void ) const
{
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

// EX02
//Comparison operators

bool	Fixed::operator> ( const Fixed& rhs ) const
{
	if (this->_integer > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator< ( const Fixed& rhs ) const
{
	if (this->_integer < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>= ( const Fixed& rhs ) const
{
	if (this->_integer >= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<= ( const Fixed& rhs ) const
{
	if (this->_integer <= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator== ( const Fixed& rhs ) const
{
	if (this->_integer == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!= ( const Fixed& rhs ) const
{
	if (this->_integer != rhs.getRawBits())
		return (true);
	return (false);
}

//Arithmetic operators

Fixed	Fixed::operator+ ( const Fixed& rhs ) const
{
	Fixed	tmp;

	tmp.setRawBits(this->_integer + rhs.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator- ( const Fixed& rhs ) const
{
	Fixed	tmp( this->toFloat() - rhs.toFloat());

	return (tmp);
}

Fixed	Fixed::operator* ( const Fixed& rhs ) const
{
	Fixed	tmp( this->toFloat() * rhs.toFloat());

	return (tmp);
}

Fixed	Fixed::operator/ ( const Fixed& rhs ) const
{
	Fixed	tmp( this->toFloat() / rhs.toFloat());

	return (tmp);
}

//Increment operators

Fixed&	Fixed::operator++ ( void )
{
	this->_integer++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	tmp = *this;
	this->_integer++;

	return (tmp);
}

Fixed&	Fixed::operator-- ( void )
{
	this->_integer--;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	tmp = *this;
	this->_integer--;

	return (tmp);
}

//Arithmetic operators

Fixed& Fixed::min(Fixed& lhs, Fixed& rhs)
{
	if (lhs <= rhs)
		return (lhs);
	return (rhs);
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs)
{
	if (lhs >= rhs)
		return (lhs);
	return (rhs);
}

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs)
{
		if (lhs <= rhs)
		return (lhs);
	return (rhs);
}

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs)
{
	if (lhs >= rhs)
		return (lhs);
	return (rhs);
}