/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:41:18 by bterral           #+#    #+#             */
/*   Updated: 2022/09/14 09:57:16 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.h"

class FragTrap: public virtual ClapTrap
{
	public:
		FragTrap ( void );
		FragTrap ( std::string name);
		FragTrap ( FragTrap const& copy );
		FragTrap& operator= ( const FragTrap& rhs );
		~FragTrap( void );

		static const int	FragHealth = 100;
		static const int	FragEnergy = 100;
		static const int	FragAttack = 30;

		//setters
		void	setHealth( void );
		void	setEnergy( void );
		void	setAttack( void );

		//actions
		void highFivesGuys(void);
}
;