/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:43:20 by bterral           #+#    #+#             */
/*   Updated: 2022/09/14 17:00:34 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void )
{
	// std::cout << "Span default constructor called" << std::endl;
}

Span::Span( unsigned int N ): _size(N)
{
	// std::cout << "Span constructor called with size " << N << std::endl;
}

Span::~Span( void )
{
	// std::cout << "Span default destructor called" << std::endl;
}

Span::Span(const Span& copy)
{
	// std::cout << "Span copy constructor called" << std::endl;
	*this = copy;
}

Span& Span::operator= (const Span& rhs)
{
	this->_vect = rhs.getVector();
	this->_size = rhs.getSize();
	return (*this);
}

//getters
std::vector<int>	Span::getVector( void ) const
{
	return (this->_vect);
}

unsigned int		Span::getSize( void ) const
{
	return (this->_size);
}

//actions
void				Span::addNumber( int nb )
{
	if (this->getSize() <= this->getVector().size())
		throw vectorIsFullException();
	this->_vect.push_back(nb);
}

int					Span::shortestSpan( void )
{
	unsigned int	i = 0;
	// unsigned int	j;
	int				span;
	unsigned int	size;

	if (this->getVector().size() < 2)
		throw notEnoughNumbersException();
	
	// while (i < (this->getSize() - 1))
	// {
	// 	j = i + 1;
	// 	while (j < this->getSize())
	// 	{
	// 		if (abs(this->getVector()[j] - this->getVector()[i]) < span)
	// 			span = abs(this->getVector()[j] - this->getVector()[i]);
	// 		j++;
	// 	}
	// 	i++;
	// }
	std::sort(this->_vect.begin(), this->_vect.end());
	span = this->getVector()[1] - this->getVector()[0];
	i = 1;
	size = this->getVector().size();
	while (i < (size - 1))
	{
		if (this->getVector()[i + 1] - this->getVector()[i] < span)
			span = this->getVector()[i + 1] - this->getVector()[i];
		i++;
	}
	return (span);
}

int					Span::longestSpan( void )
{
	int							lower;
	int							higher;

	if (this->getVector().size() < 2)
		throw notEnoughNumbersException();
	lower = *(std::min_element(this->_vect.begin(), this->_vect.end()));
	higher = *(std::max_element(this->_vect.begin(), this->_vect.end()));
	return (higher - lower);
}

void			Span::bulk_add(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>::iterator	it;

	for (it = begin; it != end; it++)
	{
		if (this->getSize() <= this->getVector().size())
			throw vectorIsFullException();
		addNumber(*it);
	}
}