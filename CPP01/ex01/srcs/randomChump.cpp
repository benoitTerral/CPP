/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:10:45 by bterral           #+#    #+#             */
/*   Updated: 2022/07/28 10:12:36 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

void randomChump( std::string name )
{
	Zombie	stack = Zombie(name);

	std::cout << BOLDCYAN << "randomChump function -- " << RESET;
	stack.announce();
	std::cout << RED << "Emptying stack memory of randomChump function - " << RESET;
	return ;
}