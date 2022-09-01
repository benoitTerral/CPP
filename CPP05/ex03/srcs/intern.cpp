/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:25:22 by bterral           #+#    #+#             */
/*   Updated: 2022/09/01 13:27:00 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.h"

Intern::Intern( void ):
{
	std::cout << GREEN << "Intern - default constructor called" << RESET << std::endl;
	return ;
}

Intern::Intern(Intern const& rhs):
{
	std::cout << BLUE << "Intern - Copy constructor called" << RESET << std::endl;
	return ;
}

Intern&	Intern::operator= (const Intern& rhs)
{
	std::cout << YELLOW <<  "Intern - Assignment operator called" << RESET << std::endl;
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	return (*this);
}

Intern::~Intern( void )
{
	std::cout << RED << "Intern - Destructor called" << RESET << std::endl;
}