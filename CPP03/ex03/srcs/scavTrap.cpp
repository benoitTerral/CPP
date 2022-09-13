/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 01:12:01 by bterral           #+#    #+#             */
/*   Updated: 2022/09/13 11:18:39 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.h"

ScavTrap::ScavTrap ( void )
{
	std::cout << GREEN << "ScavTrap - default constructor called" << RESET << std::endl;
	this->_name = "Untitled";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	return ;
}

ScavTrap::ScavTrap ( std::string name)
{
	std::cout << GREEN << "ScavTrap - name constructor called" << RESET << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::~ScavTrap ( void )
{
	std::cout << RED << "ScavTrap - Destructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap ( ScavTrap const& copy)
{
	std::cout << BLUE << "ScavTrap - Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

ScavTrap&	ScavTrap::operator= (const ScavTrap& rhs)
{
	std::cout << YELLOW <<  "ScavTrap - Assignment operator called" << RESET << std::endl;
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHitPoints();
	this->_energy_points = rhs.getEnergyPoints();
	this->_attack_damage = rhs.getAttackDamage();
	return (*this);
}

void	ScavTrap::guardGate( void )
{
	if (this->getHitPoints() > 0)
		std::cout << "Behold! " << this->getName() << " is guarding a gate !" << std::endl;
	else
		std::cout << this->getName() << " corpse has been move to the gate !" << std::endl;
}
