/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:48:37 by bterral           #+#    #+#             */
/*   Updated: 2022/08/11 16:09:58 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

Harl::Harl ( void )
{
	std::cout << BLUE << "Constructor called" << RESET << std::endl;
}

Harl::~Harl ( void )
{
	std::cout << BLUE << "Destructor called" << RESET << std::endl;
}

void	Harl::_debug( void )
{
	std::cout << GREEN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << RESET << std::endl;
}

void	Harl::_info( void )
{
	std::cout << CYAN << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << YELLOW << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month" << RESET << std::endl;
}

void	Harl::_error( void )
{
	std::cout << RED << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

void	Harl::complain(std::string level)
{
	void		(Harl::*func[4])(void) = {&Harl::_error, &Harl::_warning, &Harl::_info, &Harl::_debug};
	std::string	lvl[4] = {"ERROR", "WARNING", "INFO", "DEBUG"};
	int			array_len = sizeof(lvl) / sizeof(lvl[0]);

	for (int i = 0; i < array_len; i++)
	{
		if (level == lvl[i])
		{
			for (int j = i; j >= 0; j--)
				(this->*func[j])();
			return ;
		}
	}
	return ;
}