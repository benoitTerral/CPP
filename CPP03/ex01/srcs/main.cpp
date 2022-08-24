/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:02:30 by bterral           #+#    #+#             */
/*   Updated: 2022/08/25 01:29:36 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.h"

int main( void ) 
{
	ScavTrap	no_name;
	ScavTrap	copy_no_name( no_name );
	ScavTrap	new_guy("New guy");
	ScavTrap	last_guy = new_guy;

	no_name.takeDamage(10);
	no_name.takeDamage(2);
	no_name.attack("yo-yo");
	no_name.beRepaired(90);
	last_guy.takeDamage(2);
	for (int i = 0; i < 11; i++)
		last_guy.beRepaired(1);
	for (int i = 0; i < 11; i++)
		new_guy.attack("Alexandre");
	new_guy.guardGate();
	new_guy.takeDamage(200);
	new_guy.guardGate();
	return (0);
}