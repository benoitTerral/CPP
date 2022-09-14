/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:40:02 by bterral           #+#    #+#             */
/*   Updated: 2022/09/14 16:45:30 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>
# include <list>
# include <cstdlib>

void	bulk_add(std::vector<int>::iterator begin, std::vector<int>::iterator end);

class Span
{
	private:
		std::vector<int> _vect;
		Span( void );
		unsigned int	_size;
	public:
		Span(unsigned int N);
		~Span( void );
		Span(const Span& copy);
		Span& operator= (const Span& rhs);

		//actions
		void	addNumber( int nb );
		int		shortestSpan( void );
		int		longestSpan( void );

		//getters
		std::vector<int>	getVector( void ) const;
		unsigned int		getSize( void ) const;

		//Exceptions
		class vectorIsFullException: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Vector is full !");
				}
		};
		class notEnoughNumbersException: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("At least two numbers needed to compute the span !");
				}
		};
		void			bulk_add(std::vector<int>::iterator begin, std::vector<int>::iterator end);
}
;

#endif