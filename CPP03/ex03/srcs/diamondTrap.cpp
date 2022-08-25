/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:42:10 by bterral           #+#    #+#             */
/*   Updated: 2022/08/25 13:51:35 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.h"

DiamondTrap::DiamondTrap ( void ) //ClapTrap("Undefined_clap_name", 100, 50, 30)
{
	std::cout << GREEN << "DiamondTrap - default constructor called" << RESET << std::endl;
	this->_name = "Untitled";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_hit_point = FragTrap::_hit_point;
	this->_energy_point = ScavTrap::_energy_point;
	this->_attack_damage = FragTrap::_attack_damage;
	return ;
}

DiamondTrap::DiamondTrap ( std::string name) //ClapTrap(name + "_clap_name", 100, 50, 30)
{
	std::cout << GREEN << "DiamondTrap - name constructor called" << RESET << std::endl;
	this->_name = name;
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_hit_point = FragTrap::_hit_point;
	this->_energy_point = ScavTrap::_energy_point;
	this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::~DiamondTrap ( void )
{
	std::cout << RED << "DiamondTrap - Destructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap ( DiamondTrap const& copy)
{
	std::cout << BLUE << "DiamondTrap - Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

DiamondTrap&	DiamondTrap::operator= (const DiamondTrap& rhs)
{
	std::cout << YELLOW <<  "DiamondTrap - Assignment operator called" << RESET << std::endl;
	this->_name = rhs.getDiamondName();
	this->ClapTrap::_name = rhs.ClapTrap::_name;
	this->_hit_point = rhs.getHitPoint();
	this->_energy_point = rhs.getEnergyPoint();
	this->_attack_damage = rhs.getAttackDamage();
	return (*this);
}

void	DiamondTrap::attack(std::string target)
{
	FragTrap::ClapTrap::attack( target );
	return;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Hello, I'm " << this->_name << " also known as " << this->ClapTrap::_name << std::endl;
}

//getter Diamond name

std::string	DiamondTrap::getDiamondName( void ) const
{
	return this->_name;
}