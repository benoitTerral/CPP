/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:03:25 by bterral           #+#    #+#             */
/*   Updated: 2022/08/25 01:08:35 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.h"

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hit_point;
		int			_energy_point;
		int			_attack_damage;
	public:
		ClapTrap ( void );
		ClapTrap ( std::string name);
		ClapTrap ( ClapTrap const& copy );
		ClapTrap& operator= ( const ClapTrap& rhs );
		~ClapTrap( void );

		//getters
		std::string	getName( void ) const;
		int			getHitPoint( void ) const;
		int			getEnergyPoint( void ) const;
		int			getAttackDamage( void ) const;

		//actions
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
}
;