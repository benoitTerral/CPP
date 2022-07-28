/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:00:56 by bterral           #+#    #+#             */
/*   Updated: 2022/07/28 15:27:03 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

class HumanA
{
	public:
		HumanA ( std::string name, Weapon& weapon);
		~HumanA ( void );
		void	attack ( void );
	private:
		std::string	_name;
		Weapon*		_weapon;
};

