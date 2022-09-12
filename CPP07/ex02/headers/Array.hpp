/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:17:16 by bterral           #+#    #+#             */
/*   Updated: 2022/09/09 17:57:46 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
# include <cstdlib>

# define RESET   	"\033[0m"
# define BLACK   	"\033[30m"			/* Black */
# define RED     	"\033[31m"			/* Red */
# define GREEN   	"\033[32m"			/* Green */
# define YELLOW  	"\033[33m"			/* Yellow */
# define BLUE    	"\033[34m"			/* Blue */
# define MAGENTA 	"\033[35m"			/* Magenta */
# define CYAN    	"\033[36m"			/* Cyan */
# define WHITE   	"\033[37m"			/* White */
# define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
# define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
# define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
# define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
# define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
# define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
# define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
# define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

template< typename T>
class Array
{
	public:
		Array<T>( void )
		{
			std::cout << GREEN << "Array - default constructor" << RESET << std::endl;
			this->_array = NULL;
			this->_size = 0;
		}
		Array<T>( const unsigned int n)
		{
			std::cout << GREEN << "Array - constructor called with param" << RESET << std::endl;
			this->_array = new T[n];
			this->_size = n;
		}
		~Array<T>( void )
		{
			std::cout << RED << "Array - Destructor called" << RESET << std::endl;
			//check what happens if size = 0
			if (this->_array)
			// if (this->_size > 0)
				delete [] this->_array;
		}
		Array<T>( Array<T> const& rhs)
		{
			std::cout << GREEN << "Array - copy constructor" << RESET << std::endl;
			*this = rhs;
		}
		Array<T>	& operator=(Array<T> const & rhs)
		{
			std::cout << GREEN << "Array - surchage operator= constructor" << RESET << std::endl;
			if (this == &rhs)
				return (*this);
			if (this->_array)
				delete [] _array;
			this->_size = rhs.size();
			this->_array = new T[this->_size];
			for (size_t i = 0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];
			return (*this);
		}
		T		&operator[] ( unsigned int index) const
		{
			if (index >= this->size()) //should I check negative index
				throw	indexException();
			else
				return (this->_array[index]);
		}
		void	display_values( void );
		class indexException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("This index does not exist");
				}
		}
		;
		unsigned int	size( void ) const { return (this->_size);}
	private:
		T*		_array;
		unsigned int	_size;
}
;


#endif