/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:02:30 by bterral           #+#    #+#             */
/*   Updated: 2022/08/24 15:16:22 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

int main( void ) 
{
	//Comparison operators
	Fixed	c ( 2 );
	Fixed	d ( 3.14F);
	Fixed	e;
	e = c;
	
	std::cout << BOLDGREEN << "main in document" << RESET << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;


	std::cout << std::endl;
	std::cout << BOLDGREEN << "Comparison operators" << RESET << std::endl;
	std::cout << std::boolalpha << c << " < " << d << ": " << (c < d) << std::endl;
	std::cout << c << " > " << d << ": " << (c > d) << std::endl;
	std::cout << c << " <= " << d << ": " << (c <= d) << std::endl;
	std::cout << d << " <= " << e << ": " << (d <= e) << std::endl;
	std::cout << c << " <= " << e << ": " << (c <= e) << std::endl;
	std::cout << d << " >= " << e << ": " << (d >= e) << std::endl;
	std::cout << c << " >= " << e << ": " << (c >= e) << std::endl;
	std::cout << c << " >= " << d << ": " << (c >= d) << std::endl;
	std::cout << c << " == " << d << ": " << (c == d) << std::endl;
	std::cout << c << " == " << e << ": " << (c == e) << std::endl;
	std::cout << c << " != " << d << ": " << (c != d) << std::endl;
	std::cout << c << " != " << e << ": " << (c != e) << std::endl;

	std::cout << std::endl;
	std::cout << BOLDGREEN << "Arithmetic operators" << RESET << std::endl;
	std::cout << c << " + " << d << " = " << (c + d) << std::endl;
	std::cout << c << " - " << d << " = " << (c - d) << std::endl;
	std::cout << c << " * " << d << " = " << (c * d) << std::endl;
	std::cout << c << " / " << d << " = " << (c / d) << std::endl;

	std::cout << std::endl;
	Fixed f;
	std::cout << BOLDGREEN << "Increment operator" << RESET << std::endl;
	std::cout << "f : " << f << std::endl;
	std::cout << "++f : " << ++f << std::endl;
	std::cout << "--f : " << --f << std::endl;
	std::cout << "f++ : " << f++ << std::endl;
	std::cout << "f : " << f << std::endl;
	std::cout << "f-- : " << f-- << std::endl;
	std::cout << "f : " << f << std::endl;

	std::cout << std::endl;
	std::cout << BOLDGREEN << "Increment operator" << RESET << std::endl;
	std::cout << "min(" << c << "," << d << ") = "<< Fixed::min(c, d) << std::endl;
	std::cout << "max(" << c << "," << d << ") = "<< Fixed::max(c, d) << std::endl;
	Fixed const	g ;
	Fixed const	h = (g + 1.42F);
	std::cout << "min(" << g << "," << h << ") = "<< Fixed::min(g, h) << std::endl;
	std::cout << "max(" << g << "," << h << ") = "<< Fixed::max(g, h) << std::endl;
}