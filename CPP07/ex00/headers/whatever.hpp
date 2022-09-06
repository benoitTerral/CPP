/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:17:16 by bterral           #+#    #+#             */
/*   Updated: 2022/09/06 15:32:40 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template< typename T>
void	swap(T & a, T & b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template< typename T>
T const &	min(T const & a, T const & b)
{
	return (a < b ? a : b);
}

template< typename T>
T const &	max(T const & a, T const & b)
{
	return (a > b ? a : b);
}

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

#endif