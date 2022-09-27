/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:03:25 by bterral           #+#    #+#             */
/*   Updated: 2022/09/27 13:22:29 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal ( void );
		Animal ( Animal const& copy );
		Animal& operator= ( const Animal& rhs );
		virtual	~Animal( void );
		virtual void	makeSound( void ) const;

		//getter
		std::string		getType( void ) const;
}
;