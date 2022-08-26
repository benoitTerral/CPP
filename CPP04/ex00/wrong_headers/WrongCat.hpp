/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:17:23 by bterral           #+#    #+#             */
/*   Updated: 2022/08/26 10:09:03 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.h"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat ( void );
		// Animal ( std::string type);
		WrongCat ( WrongCat const& copy );
		WrongCat& operator= ( const WrongCat& rhs );
		~WrongCat( void );
		void	makeSound( void ) const;
}
;