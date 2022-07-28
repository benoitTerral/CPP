/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:12:02 by bterral           #+#    #+#             */
/*   Updated: 2022/07/28 15:37:06 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

HumanB::HumanB ( std::string name): _name(name)
{
	this->_weapon = NULL;
	return ;
}

HumanB::~HumanB ( void )
{
	std::cout << "HumanB " << this->_name << " destructor called" << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon)
{
	this->_weapon = &weapon;
	return ;
}

void	HumanB::attack( void )
{
	if (!this->_weapon)
		std::cout << this->_name << " attacks bare-handed !" << std::endl;
	else
		std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
}