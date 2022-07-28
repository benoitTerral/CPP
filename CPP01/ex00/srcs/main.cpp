/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:15:46 by bterral           #+#    #+#             */
/*   Updated: 2022/07/28 11:46:59 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie*	ptr = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		ptr[i].setName(name);
		ptr[i].announce();
	}
	return (ptr);
}