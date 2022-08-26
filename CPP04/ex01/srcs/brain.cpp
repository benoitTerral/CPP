/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:25:43 by bterral           #+#    #+#             */
/*   Updated: 2022/08/26 15:56:21 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"
// #include "../headers/Brain.hpp"

//Constructors and destructor

Brain::Brain ( void )
{
	std::cout << GREEN << "Brain - default constructor called" << RESET << std::endl;
	return ;
}

Brain::~Brain ( void )
{
	std::cout << RED << "Brain - Destructor called" << RESET << std::endl;
}

Brain::Brain ( Brain const& copy)
{
	std::cout << BLUE << "Brain - Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

Brain&	Brain::operator= (const Brain& rhs)
{
	std::cout << YELLOW <<  "Brain - Assignment operator called" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

//Getters and setters

std::string	Brain::getIdea( int i) const
{
	return	this->_ideas[i];
}

void		Brain::setIdea( int i, std::string idea)
{
	this->_ideas[i] = idea;
	return ;
}
