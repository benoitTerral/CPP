/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:02:30 by bterral           #+#    #+#             */
/*   Updated: 2022/08/25 00:53:51 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.h"

int main( void ) 
{
	ClapTrap	no_name;
	ClapTrap	copy_no_name( no_name );
	ClapTrap	new_guy("New guy");
	ClapTrap	last_guy = new_guy;

	no_name.takeDamage(10);
	no_name.takeDamage(2);
	no_name.attack("yo-yo");
	no_name.beRepaired(90);
	last_guy.takeDamage(2);
	for (int i = 0; i < 11; i++)
		last_guy.beRepaired(1);
	for (int i = 0; i < 11; i++)
		new_guy.attack("Alexandre");
	return (0);
}