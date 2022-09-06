/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:17:16 by bterral           #+#    #+#             */
/*   Updated: 2022/09/06 14:10:15 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# include <iostream>

template< typename T>
void	array_mod(T *array, size_t size, void func(T &))
{
	for (size_t i = 0; i < size; i++)
		func(array[i]);
}

template< typename T>
void	time_two(T input)
{
	std::cout << input * 2 << std::endl; 
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