/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:03:25 by bterral           #+#    #+#             */
/*   Updated: 2022/09/27 13:18:10 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.h"

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal ( void );
		WrongAnimal ( WrongAnimal const& copy );
		WrongAnimal& operator= ( const WrongAnimal& rhs );
		~WrongAnimal( void );
		void	makeSound( void ) const;

		//getter
		std::string		getType( void ) const;
}
;