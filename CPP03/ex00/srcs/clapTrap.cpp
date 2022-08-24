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
	this->_hit_point = 10;
	this->_energy_point = 10;
	this->_attack_damage = 0;
	return ;
}

ClapTrap::ClapTrap ( std::string name) : _name(name)
{
	std::cout << GREEN << "ClapTrap - name constructor called" << RESET << std::endl;
	this->_hit_point = 10;
	this->_energy_point = 10;
	this->_attack_damage = 0;
}

ClapTrap::~ClapTrap ( void )
{
	std::cout << RED << "ClapTrap - Destructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap ( ClapTrap const& copy)
{
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

ClapTrap&	ClapTrap::operator= (const ClapTrap& rhs)
{
	std::cout << YELLOW <<  "Assignment operator called" << RESET << std::endl;
	this->_name = rhs.getName();
	this->_hit_point = rhs.getHitPoint();
	this->_energy_point = rhs.getEnergyPoint();
	this->_attack_damage = rhs.getAttackDamage();
	return (*this);
}

//getters

std::string	ClapTrap::getName( void ) const
{
	return this->_name;
}

int			ClapTrap::getHitPoint( void ) const
{
	return this->_hit_point;
}

int			ClapTrap::getEnergyPoint( void ) const
{
	return this->_energy_point;
}

int			ClapTrap::getAttackDamage( void ) const
{
	return this->_attack_damage;
}

//actions

void	ClapTrap::attack(const std::string& target)
{
	if (this->getHitPoint() > 0 && this->getEnergyPoint() > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->_energy_point--;
	}
	else
		std::cout << "ClapTrap " << this->getName() << " attack failed !" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHitPoint() > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " took " << amount << " point(s) of damage !" << std::endl;
		this->_hit_point-= amount;
	}
	else
		std::cout << "ClapTrap " << this->getName() << " didn't take damage, it's already over for it !" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHitPoint() > 0 && this->getEnergyPoint() > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has repaired " << amount << " hit point(s)!" << std::endl;
		this->_hit_point += amount;
		this->_energy_point--;
	}
	else
		std::cout << "ClapTrap " << this->getName() << " failed reparation !" << std::endl;
	return ;
}