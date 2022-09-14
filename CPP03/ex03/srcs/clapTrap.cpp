/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clapTrap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:32:55 by bterral           #+#    #+#             */
/*   Updated: 2022/08/23 15:22:04 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.h"

//Constructors and destructor

ClapTrap::ClapTrap ( void )
{
	std::cout << GREEN << "ClapTrap - default constructor called" << RESET << std::endl;
	this->_name = "Untitled";
	this->_hit_points = FragTrap::ClapTrap::getHitPoints();
	this->_energy_points = ScavTrap::ClapTrap::getEnergyPoints();
	this->_attack_damage = FragTrap::ClapTrap::getAttackDamage();
	return ;
}

ClapTrap::ClapTrap ( std::string name) : _name(name)
{
	std::cout << GREEN << "ClapTrap - name constructor called" << RESET << std::endl;
	this->_hit_points = FragTrap::ClapTrap::getHitPoints();
	this->_energy_points = ScavTrap::ClapTrap::getEnergyPoints();
	this->_attack_damage = FragTrap::ClapTrap::getAttackDamage();
}

ClapTrap::~ClapTrap ( void )
{
	std::cout << RED << "ClapTrap - Destructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap ( ClapTrap const& copy)
{
	std::cout << BLUE << "ClapTrap - Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

ClapTrap&	ClapTrap::operator= (const ClapTrap& rhs)
{
	std::cout << YELLOW <<  "ClapTrap - Assignment operator called" << RESET << std::endl;
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHitPoints();
	this->_energy_points = rhs.getEnergyPoints();
	this->_attack_damage = rhs.getAttackDamage();
	return (*this);
}

//getters

std::string	ClapTrap::getName( void ) const
{
	return this->_name;
}

int			ClapTrap::getHitPoints( void ) const
{
	return this->_hit_points;
}

int			ClapTrap::getEnergyPoints( void ) const
{
	return this->_energy_points;
}

int			ClapTrap::getAttackDamage( void ) const
{
	return this->_attack_damage;
}

//actions

void	ClapTrap::attack(const std::string& target)
{
	if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	else
		std::cout << "ClapTrap " << this->getName() << " attack failed !" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHitPoints() > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " took " << amount << " point(s) of damage !" << std::endl;
		this->_hit_points-= amount;
	}
	else
		std::cout << "ClapTrap " << this->getName() << " didn't take damage, it's already over for it !" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has repaired " << amount << " hit point(s)!" << std::endl;
		this->_hit_points += amount;
		this->_energy_points--;
	}
	else
		std::cout << "ClapTrap " << this->getName() << " failed reparation !" << std::endl;
	return ;
}