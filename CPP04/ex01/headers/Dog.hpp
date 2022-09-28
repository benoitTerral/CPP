/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:24:44 by bterral           #+#    #+#             */
/*   Updated: 2022/09/28 14:35:39 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

class Dog: public Animal
{
	public:
		Dog ( void );
		Dog ( Dog const& copy );
		Dog& operator= ( const Dog& rhs );
		virtual	~Dog( void );
		virtual void	makeSound( void ) const;

		//getter
		Brain&	getBrain( void ) const;
	private:
		Brain*	_brain;
}
;