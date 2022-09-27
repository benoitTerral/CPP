/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:24:44 by bterral           #+#    #+#             */
/*   Updated: 2022/09/27 13:17:55 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

class Dog: public Animal
{
	public:
		Dog ( void );
		Dog ( Dog const& copy );
		Dog& operator= ( const Dog& rhs );
		~Dog( void );
		virtual void	makeSound( void ) const;
}
;