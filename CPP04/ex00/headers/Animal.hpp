/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:03:25 by bterral           #+#    #+#             */
/*   Updated: 2022/09/28 10:46:27 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal ( void );
		Animal (std::string type);
		Animal ( Animal const& copy );
		Animal& operator= ( const Animal& rhs );
		virtual	~Animal( void );
		virtual void	makeSound( void ) const;

		//getter
		std::string		getType( void ) const;
}
;