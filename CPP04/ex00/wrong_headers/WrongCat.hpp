/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:17:23 by bterral           #+#    #+#             */
/*   Updated: 2022/09/27 13:18:12 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.h"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat ( void );
		WrongCat ( WrongCat const& copy );
		WrongCat& operator= ( const WrongCat& rhs );
		~WrongCat( void );
		void	makeSound( void ) const;
}
;