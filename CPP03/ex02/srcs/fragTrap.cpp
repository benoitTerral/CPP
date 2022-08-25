/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:48:44 by bterral           #+#    #+#             */
/*   Updated: 2022/08/25 11:33:29 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.h"

FragTrap::FragTrap ( void )
{
	std::cout << GREEN << "FragTrap - default constructor called" << RESET << std::endl;
	this->_name = "Untitled";
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_damage = 30;
	return ;
}

FragTrap::FragTrap ( std::string name)
{
	std::cout << GREEN << "FragTrap - name constructor called" << RESET << std::endl;
	this->_name = name;
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_damage = 30;
}

FragTrap::~FragTrap ( void )
{
	std::cout << RED << "FragTrap - Destructor called" << RESET << std::endl;
}

FragTrap::FragTrap ( FragTrap const& copy)
{
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

FragTrap&	FragTrap::operator= (const FragTrap& rhs)
{
	std::cout << YELLOW <<  "Assignment operator called" << RESET << std::endl;
	this->_name = rhs.getName();
	this->_hit_point = rhs.getHitPoint();
	this->_energy_point = rhs.getEnergyPoint();
	this->_attack_damage = rhs.getAttackDamage();
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (this->getHitPoint() > 0)
		std::cout << "FragTrap " << this->getName() << " high five !" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " is busy being dead !" << std::endl;
}