/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:41:18 by bterral           #+#    #+#             */
/*   Updated: 2022/08/25 11:37:49 by bterral          ###   ########.fr       */
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

		//actions
		void highFivesGuys(void);
}
;