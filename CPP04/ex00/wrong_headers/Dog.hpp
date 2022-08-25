/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:24:44 by bterral           #+#    #+#             */
/*   Updated: 2022/08/25 15:50:57 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

class wrongDog: public wrongAnimal
{
	public:
		wrongDog ( void );
		// Animal ( std::string type);
		wrongDog ( wrongDog const& copy );
		wrongDog& operator= ( const wrongDog& rhs );
		~wrongDog( void );
		virtual void	makeSound( void ) const;
}
;