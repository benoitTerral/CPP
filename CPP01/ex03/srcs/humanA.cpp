/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:12:02 by bterral           #+#    #+#             */
/*   Updated: 2022/07/28 15:27:40 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

HumanA::HumanA ( std::string name, Weapon& weapon): _name(name)
{
	std::cout << GREEN << "HumanA " << this->_name << " constructor called" << RESET << std::endl;
	this->_weapon = &weapon;
	return ;
}

HumanA::~HumanA ( void )
{
	std::cout << RED << "HumanA " << this->_name << " destructor called" << RESET << std::endl;
}

void	HumanA::attack( void )
{
	std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
}