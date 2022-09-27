/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:17:23 by bterral           #+#    #+#             */
/*   Updated: 2022/09/27 13:17:58 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

class Cat: public Animal
{
	public:
		Cat ( void );
		Cat ( Cat const& copy );
		Cat& operator= ( const Cat& rhs );
		~Cat( void );
		virtual void	makeSound( void ) const;
}
;