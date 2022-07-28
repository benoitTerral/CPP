/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 08:58:22 by bterral           #+#    #+#             */
/*   Updated: 2022/07/28 10:20:43 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie( std::string name): _name(name)
{
	std::cout << GREEN << "Zombie constructor called for " << this->_name << RESET << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << RED << "Zombie destructor called for " << this->_name << RESET << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << CYAN << this->_name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}
