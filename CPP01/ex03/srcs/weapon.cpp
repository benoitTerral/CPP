/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:57:57 by bterral           #+#    #+#             */
/*   Updated: 2022/07/28 15:23:16 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

Weapon::Weapon( std::string name )
{
	std::cout << GREEN << "Weapon constructor called" << RESET << std::endl;
	this->setType(name);
	return ;
}

Weapon::~Weapon( void )
{
	std::cout << RED << "Weapon destructor called" << RESET << std::endl;
}

Weapon::Weapon( void )
{
	std::cout << GREEN << "Weapon constructor called" << RESET << std::endl;
}

void	Weapon::setType( std::string type)
{
	_type = type;
	return ;
}

std::string	Weapon::getType( void ) const
{
	return (this->_type);
}