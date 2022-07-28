/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 08:41:49 by bterral           #+#    #+#             */
/*   Updated: 2022/07/28 11:39:34 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

class Zombie
{
	public:
		Zombie ();
		Zombie( std::string name);
		~Zombie( void );
		void	announce( void );
		void	setName( std::string name);
	private:
		std::string	_name;
};