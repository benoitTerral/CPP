/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:48:44 by bterral           #+#    #+#             */
/*   Updated: 2022/09/14 10:04:11 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.h"

FragTrap::FragTrap ( void ): ClapTrap()
{
	std::cout << GREEN << "FragTrap - default constructor called" << RESET << std::endl;
	this->setHealth();
	this->setEnergy();
	this->setAttack();
}

FragTrap::FragTrap ( std::string name): ClapTrap(name)
{
	std::cout << GREEN << "FragTrap - name constructor called" << RESET << std::endl;
	this->setHealth();
	this->setEnergy();
	this->setAttack();
}

FragTrap::~FragTrap ( void )
{
	std::cout << RED << "FragTrap - Destructor called" << RESET << std::endl;
}

FragTrap::FragTrap ( FragTrap const& copy)
{
	std::cout << BLUE << "FragTrap - Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

FragTrap&	FragTrap::operator= (const FragTrap& rhs)
{
	std::cout << YELLOW <<  "FragTrap - Assignment operator called" << RESET << std::endl;
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHitPoints();
	this->_energy_points = rhs.getEnergyPoints();
	this->_attack_damage = rhs.getAttackDamage();
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (this->getHitPoints() > 0)
		std::cout << "FragTrap " << this->getName() << " high five !" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " is busy being dead !" << std::endl;
}

void	FragTrap::setHealth( void )
{
	this->_hit_points = FragHealth;
}

void	FragTrap::setEnergy( void )
{
	this->_energy_points = FragEnergy;
}

void	FragTrap::setAttack( void )
{
	this->_attack_damage = FragAttack;
}