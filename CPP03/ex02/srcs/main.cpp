/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:02:30 by bterral           #+#    #+#             */
/*   Updated: 2022/08/25 11:31:59 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.h"

int main( void ) 
{
	FragTrap	no_name;
	FragTrap	copy_no_name( no_name );
	FragTrap	new_guy("New guy");
	FragTrap	last_guy = new_guy;

	no_name.takeDamage(10);
	no_name.takeDamage(2);
	no_name.attack("yo-yo");
	no_name.beRepaired(90);
	last_guy.takeDamage(2);
	for (int i = 0; i < 11; i++)
		last_guy.beRepaired(1);
	for (int i = 0; i < 11; i++)
		new_guy.attack("Alexandre");
	new_guy.highFivesGuys();
	new_guy.takeDamage(200);
	new_guy.highFivesGuys();
	return (0);
}