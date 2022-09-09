/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:20:21 by bterral           #+#    #+#             */
/*   Updated: 2022/09/09 11:08:06 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie*	ptr = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		ptr[i].setName(name);
	}
	return (ptr);
}
