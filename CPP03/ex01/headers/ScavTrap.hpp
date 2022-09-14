/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 01:08:10 by bterral           #+#    #+#             */
/*   Updated: 2022/09/13 14:53:18 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap ( void );
		ScavTrap ( std::string name);
		ScavTrap ( ScavTrap const& copy );
		ScavTrap& operator= ( const ScavTrap& rhs );
		~ScavTrap( void );

		//actions
		void	guardGate( void );
		void	attack(const std::string& target);
}
;