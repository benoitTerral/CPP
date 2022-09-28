/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:17:23 by bterral           #+#    #+#             */
/*   Updated: 2022/09/28 14:35:37 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

class Cat: public Animal
{
	public:
		Cat ( void );
		Cat ( Cat const& copy );
		Cat& operator= ( const Cat& rhs );
		virtual	~Cat( void );
		virtual void	makeSound( void ) const;

		//getter
		Brain&	getBrain( void ) const;
	private:
		Brain*	_brain;
}
;