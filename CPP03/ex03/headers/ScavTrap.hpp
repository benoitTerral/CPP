/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 01:08:10 by bterral           #+#    #+#             */
/*   Updated: 2022/09/14 09:57:28 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class ScavTrap: public virtual ClapTrap
{
	public:
		ScavTrap ( void );
		ScavTrap ( std::string name);
		ScavTrap ( ScavTrap const& copy );
		ScavTrap& operator= ( const ScavTrap& rhs );
		~ScavTrap( void );

		static const int	ScavHealth = 100;
		static const int	ScavEnergy = 50;
		static const int	ScavAttack = 20;

		//setters
		void	setHealth( void );
		void	setEnergy( void );
		void	setAttack( void );

		//actions
		void	guardGate( void );
}
;