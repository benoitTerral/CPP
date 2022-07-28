/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 08:41:49 by bterral           #+#    #+#             */
/*   Updated: 2022/07/28 10:03:32 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

class Zombie
{
	public:
		Zombie( std::string name);
		~Zombie( void );
		void	announce( void );
	private:
		std::string	_name;
};