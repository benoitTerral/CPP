/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:11:38 by bterral           #+#    #+#             */
/*   Updated: 2022/08/26 15:56:27 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

class Brain
{
	protected:
		std::string	_ideas[100];
	public:
		Brain ( void );
		Brain ( Brain const& copy );
		Brain& operator= ( const Brain& rhs );
		~Brain( void );
		// getter and setter
		std::string	getIdea( int i) const;
		void		setIdea( int i, std::string idea);
};