/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:10:04 by bterral           #+#    #+#             */
/*   Updated: 2022/07/28 10:09:16 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie*	ptr = new Zombie(name);
	std::cout << BOLDCYAN << "NewZombie function -- " << RESET;
	return (ptr);
}