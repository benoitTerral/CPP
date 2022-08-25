/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:17:23 by bterral           #+#    #+#             */
/*   Updated: 2022/08/25 15:50:45 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

class wrongCat: public wrongAnimal
{
	public:
		wrongCat ( void );
		// Animal ( std::string type);
		wrongCat ( Cat const& copy );
		wrongCat& operator= ( const wrongCat& rhs );
		~wrongCat( void );
		virtual void	makeSound( void ) const;
}
;