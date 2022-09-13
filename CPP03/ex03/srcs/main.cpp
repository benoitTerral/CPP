/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:02:30 by bterral           #+#    #+#             */
/*   Updated: 2022/09/13 09:56:45 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.h"

int main( void ) 
{
	DiamondTrap	no_name;
	DiamondTrap	copy_no_name( no_name );
	DiamondTrap	new_guy("New guy");
	DiamondTrap	last_guy = new_guy;

	no_name.takeDamage(10);
	no_name.takeDamage(2);
	no_name.attack("yo-yo");
	no_name.beRepaired(90);
	copy_no_name.whoAmI();
	std::cout << "Hit points : " << copy_no_name.ClapTrap::getHitPoints() << ",Energy points : " << copy_no_name.ClapTrap::getEnergyPoints() << ",Attack damage : " << copy_no_name.ClapTrap::getAttackDamage() << std::endl;
	copy_no_name.takeDamage(2);
	copy_no_name.beRepaired(90);
	std::cout << "Hit points : " << copy_no_name.ClapTrap::getHitPoints() << ",Energy points : " << copy_no_name.ClapTrap::getEnergyPoints() << ",Attack damage : " << copy_no_name.ClapTrap::getAttackDamage() << std::endl;
	std::cout << copy_no_name.getName() << std::endl;
	std::cout << new_guy.getName() << std::endl;
	std::cout << last_guy.getName() << std::endl;
	std::cout << copy_no_name.getDiamondName() << std::endl;
	std::cout << new_guy.getDiamondName() << std::endl;
	std::cout << last_guy.getDiamondName() << std::endl;
	return (0);
}