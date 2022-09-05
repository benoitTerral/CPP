/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:21:46 by bterral           #+#    #+#             */
/*   Updated: 2022/09/05 17:15:00 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

Convert::Convert( void )
{
	std::cout << GREEN << "Convert - default constructor called" << RESET << std::endl;
	this->_literal = 0;
	return ;
}

Convert::Convert( std::string literal)
{
	std::cout << GREEN << "Convert - constructor with param called" << RESET << std::endl;
	if (literal == "-inff" || literal == "+inff" || literal == "nanf" || literal == "-inf" || literal == "+inf" || literal == "nan")
		this->_literal = strtod(literal.c_str(), NULL);
	else if (!isChar(literal) && !isInt(literal) && !isDouble(literal) && !isfloat(literal))
		throw unhandledParamater();
	else
		this->_literal = strtod(literal.c_str(), NULL);
	return ;
}

Convert::Convert(Convert const& rhs): _literal(rhs.getLiteral())
{
	std::cout << BLUE << "Convert - Copy constructor called" << RESET << std::endl;
	return ;
}

Convert&	Convert::operator= (const Convert& rhs)
{
	std::cout << YELLOW <<  "Convert - Assignment operator called" << RESET << std::endl;
	this->_literal = rhs.getLiteral();
	return (*this);
}

Convert::~Convert( void )
{
	std::cout << RED << "Convert - Destructor called" << RESET << std::endl;
}

//Getters

double		Convert::getLiteral( void ) const
{
	return this->_literal;
}


//exceptions

const char* Convert::unhandledParamater::what() const throw()
{
	return ("Parameters must be of type char, int, double or float");
}

//print

void		Convert::print_char( void ) const
{
	std::cout << "char: ";
	if (this->getLiteral() >= 0 && (this->getLiteral() < 32 || this->getLiteral() == 127))
		std::cerr << "Non displayable" << std::endl;
	else if (this->getLiteral() >= 32 && this->getLiteral() <= 126)
		std::cout << static_cast<char>(this->_literal) << std::endl;
	else
		std::cout <<  "impossible" << std::endl;
}

void		Convert::print_int( void ) const
{
	std::cout << "int: ";
	if (this->getLiteral() > INT_MIN || this->getLiteral() < INT_MAX)
		std::cout << static_cast<int>(this->getLiteral()) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void		Convert::print_float( void ) const
{
	std::cout << "float: ";
	if (this->getLiteral() < FLT_MIN)
		std::cout << "-inff" << std::endl;
	else if (this->getLiteral() > FLT_MAX)
		std::cout << "inff" << std::endl;
	else if (static_cast<float>(this->getLiteral()) == static_cast<int>(this->getLiteral()))
		std::cout << static_cast<float>(this->getLiteral()) << ".0f" << std::endl;
	else
		std::cout << static_cast<float>(this->getLiteral()) << std::endl;
}

void		Convert::print_double( void ) const
{
	std::cout << "double: ";
	if (static_cast<double>(this->getLiteral()) == static_cast<int>(this->getLiteral()))
		std::cout << static_cast<double>(this->getLiteral()) << ".0" << std::endl;
	else
		std::cout << static_cast<double>(this->getLiteral()) << std::endl;

}