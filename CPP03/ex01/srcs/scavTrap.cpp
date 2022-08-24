/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 01:12:01 by bterral           #+#    #+#             */
/*   Updated: 2022/08/25 01:28:48 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.h"

ScavTrap::ScavTrap ( void )
{
	std::cout << GREEN << "ScavTrap - default constructor called" << RESET << std::endl;
	this->_name = "Untitled";
	this->_hit_point = 100;
	this->_energy_point = 50;
	this->_attack_damage = 20;
	return ;
}

ScavTrap::ScavTrap ( std::string name)
{
	std::cout << GREEN << "ScavTrap - name constructor called" << RESET << std::endl;
	this->_name = name;
	this->_hit_point = 100;
	this->_energy_point = 50;
	this->_attack_damage = 20;
}

ScavTrap::~ScavTrap ( void )
{
	std::cout << RED << "ScavTrap - Destructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap ( ScavTrap const& copy)
{
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

ScavTrap&	ScavTrap::operator= (const ScavTrap& rhs)
{
	std::cout << YELLOW <<  "Assignment operator called" << RESET << std::endl;
	this->_name = rhs.getName();
	this->_hit_point = rhs.getHitPoint();
	this->_energy_point = rhs.getEnergyPoint();
	this->_attack_damage = rhs.getAttackDamage();
	return (*this);
}

void	ScavTrap::guardGate( void )
{
	if (this->getHitPoint() > 0)
		std::cout << "Behold! " << this->getName() << " is guarding a gate !" << std::endl;
	else
		std::cout << this->getName() << " corpse has been move to the gate !" << std::endl;
}
