/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:40:02 by bterral           #+#    #+#             */
/*   Updated: 2022/09/14 17:29:25 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack<T>( void ) {};
		~MutantStack<T>( void ) {};
		MutantStack<T>(const MutantStack& copy) {*this = copy;};
		MutantStack<T>& operator= (const MutantStack& rhs) 
		{(void)rhs;
		return (*this);
		};

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin( void ) {return this->c.begin();};
		iterator	end( void ) {return this->c.end();};

	private:
			
}
;

#endif


	
