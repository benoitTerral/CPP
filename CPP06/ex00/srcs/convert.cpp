/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:21:46 by bterral           #+#    #+#             */
/*   Updated: 2022/10/03 15:12:42 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

Convert::Convert( void )
{
	this->_literal = 0;
	return ;
}

Convert::Convert( std::string literal)
{
	if (literal == "-inff" || literal == "+inff" || literal == "nanf")
		this->_literal = convert_float_limit(literal);
	else if  (literal == "-inf" || literal == "+inf" || literal == "nan")
		this->_literal = strtod(literal.c_str(), NULL);
	else if (literal.length() == 1 && !std::isdigit(literal[0]))
		this->_literal = static_cast<char>(literal[0]);
	else if (!isChar(literal) && !isInt(literal) && !isDouble(literal) && !isfloat(literal))
		throw unhandledParamater();
	else
	{
		
		this->_literal = strtod(literal.c_str(), NULL);
	}
	return ;
}

Convert::Convert(Convert const& rhs): _literal(rhs.getLiteral())
{
	return ;
}

Convert&	Convert::operator= (const Convert& rhs)
{
	this->_literal = rhs.getLiteral();
	return (*this);
}

Convert::~Convert( void )
{
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
	if (this->getLiteral() > INT_MIN && this->getLiteral() < INT_MAX)
		std::cout << static_cast<int>(this->getLiteral()) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void		Convert::print_float( void ) const
{
	std::cout << "float: ";
	if (this->getLiteral() < -FLT_MAX)
		std::cout << "-inff" << std::endl;
	else if (this->getLiteral() > FLT_MAX)
		std::cout << "inff" << std::endl;
	else if (static_cast<float>(this->getLiteral()) == static_cast<int>(this->getLiteral()))
		std::cout << static_cast<float>(this->getLiteral()) << ".0f" << std::endl;
	else
		std::cout << static_cast<float>(this->getLiteral()) << "f" << std::endl;
}

void		Convert::print_double( void ) const
{
	std::cout << "double: ";
	if (static_cast<double>(this->getLiteral()) == static_cast<int>(this->getLiteral()))
		std::cout << static_cast<double>(this->getLiteral()) << ".0" << std::endl;
	else
		std::cout << static_cast<double>(this->getLiteral()) << std::endl;

}