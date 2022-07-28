/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:35:16 by bterral           #+#    #+#             */
/*   Updated: 2022/07/28 12:47:57 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main ( void )
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "Memory addres from string: " << &string << std::endl;
	std::cout << "Memory addres from stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory addres from stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "string value using string variable: " << string << std::endl;
	std::cout << "string value using stringPTR variable: " << *stringPTR << std::endl;
	std::cout << "string value using stringREF variable: " << stringREF << std::endl;
	return (0);
}