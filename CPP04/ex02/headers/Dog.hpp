/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:24:44 by bterral           #+#    #+#             */
/*   Updated: 2022/08/29 13:19:51 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

class Dog: public AAnimal
{
	public:
		Dog ( void );
		// Animal ( std::string type);
		Dog ( Dog const& copy );
		Dog& operator= ( const Dog& rhs );
		~Dog( void );
		virtual void	makeSound( void ) const;

		//getter
		Brain*	getBrain( void ) const;
	private:
		Brain*	_brain;
}
;