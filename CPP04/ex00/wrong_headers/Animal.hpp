/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:03:25 by bterral           #+#    #+#             */
/*   Updated: 2022/08/25 15:50:34 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

class wrongAnimal
{
	protected:
		std::string	_type;
	public:
		wrongAnimal ( void );
		// Animal ( std::string type);
		wrongAnimal ( wrongAnimal const& copy );
		wrongAnimal& operator= ( const wrongAnimal& rhs );
		~wrongAnimal( void );
		virtual void	makeSound( void ) const;

		//getter
		std::string		getType( void ) const;
}
;