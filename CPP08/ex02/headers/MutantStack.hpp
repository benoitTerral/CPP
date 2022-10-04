/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:40:02 by bterral           #+#    #+#             */
/*   Updated: 2022/10/04 17:14:30 by bterral          ###   ########.fr       */
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
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		iterator				begin( void ) {return this->c.begin();};
		iterator				end( void ) {return this->c.end();};
		reverse_iterator		rbegin( void ) {return this->c.rbegin();};
		reverse_iterator		rend( void ) {return this->c.rend();};
		const_iterator			cbegin( void ) {return this->c.cbegin();};
		const_iterator			cend( void ) {return this->c.cend();};
		const_reverse_iterator	crbegin( void ) {return this->c.crbegin();};
		const_reverse_iterator	crend( void ) {return this->c.crend();};

	private:
			
}
;

#endif


	
