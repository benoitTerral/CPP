/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:39:01 by bterral           #+#    #+#             */
/*   Updated: 2022/08/25 13:51:32 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.h"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap ( void );
		DiamondTrap ( std::string name);
		DiamondTrap ( DiamondTrap const& copy );
		DiamondTrap& operator= ( const DiamondTrap& rhs );
		~DiamondTrap( void );
		//actions
		void	whoAmI();
		void	attack(std::string target);

		//getter
		std::string	getDiamondName( void ) const;
	private:
		std::string	_name;
}
;