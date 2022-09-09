/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 08:41:49 by bterral           #+#    #+#             */
/*   Updated: 2022/09/09 13:53:49 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

class Zombie
{
	public:
		Zombie ();
		Zombie( std::string name);
		~Zombie( void );
		void	announce( void ) const;
		void	setName( std::string name);
	private:
		std::string	_name;
};