/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:15:46 by bterral           #+#    #+#             */
/*   Updated: 2022/07/28 11:50:05 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int	main( void )
{
	Zombie* zombieNation = zombieHorde(10, "Jean-Charles");
	for (int i = 0; i < 10; i++)
		zombieNation[i].announce();
	delete [] zombieNation;
	return (0);
}