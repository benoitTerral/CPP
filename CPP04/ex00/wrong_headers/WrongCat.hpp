/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:17:23 by bterral           #+#    #+#             */
/*   Updated: 2022/09/28 09:53:21 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

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