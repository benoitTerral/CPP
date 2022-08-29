/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:03:25 by bterral           #+#    #+#             */
/*   Updated: 2022/08/29 13:18:33 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

class AAnimal
{
	protected:
		std::string	_type;
	public:
		AAnimal ( void );
		// AAnimal ( std::string type);
		AAnimal ( AAnimal const& copy );
		AAnimal& operator= ( const AAnimal& rhs );
		virtual	~AAnimal( void );
		virtual void	makeSound( void ) const = 0;

		//getter
		std::string		getType( void ) const;
}
;