/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:40:02 by bterral           #+#    #+#             */
/*   Updated: 2022/10/04 17:30:59 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include <list>

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
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		iterator				begin( void ) {return this->c.begin();};
		iterator				end( void ) {return this->c.end();};
		reverse_iterator		rbegin( void ) {return this->c.rbegin();};
		reverse_iterator		rend( void ) {return this->c.rend();};

	private:
			
}
;

#endif


	
