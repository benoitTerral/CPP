/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 01:12:01 by bterral           #+#    #+#             */
/*   Updated: 2022/09/14 10:04:57 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.h"

ScavTrap::ScavTrap ( void ): ClapTrap()
{
	std::cout << GREEN << "ScavTrap - default constructor called" << RESET << std::endl;
	this->setHealth();
	this->setEnergy();
	this->setAttack();
	return ;
}

ScavTrap::ScavTrap ( std::string name): ClapTrap(name)
{
	std::cout << GREEN << "ScavTrap - name constructor called" << RESET << std::endl;
	this->setHealth();
	this->setEnergy();
	this->setAttack();
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

//setters

void	ScavTrap::setHealth( void )
{
	this->_hit_points = ScavHealth;
}

void	ScavTrap::setEnergy( void )
{
	this->_energy_points = ScavEnergy;
}

void	ScavTrap::setAttack( void )
{
	this->_attack_damage = ScavAttack;
}