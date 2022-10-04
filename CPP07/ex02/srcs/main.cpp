/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:15:17 by bterral           #+#    #+#             */
/*   Updated: 2022/10/04 14:52:23 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void )
{
		
	Array<std::string>	stringArray(6);
	stringArray[0] = "Hi";
	stringArray[2] = "How are you?";
	std::cout << stringArray[0] << std::endl;
	std::cout << stringArray[1] << std::endl;
	std::cout << stringArray[2] << std::endl;
	std::cout << stringArray[3] << std::endl;
	std::cout << stringArray[4] << std::endl;

	Array<std::string>	anotherStringArray;
	anotherStringArray = stringArray;
	std::cout << anotherStringArray[0] << std::endl;
	std::cout << anotherStringArray[1] << std::endl;
	std::cout << anotherStringArray[2] << std::endl;
	std::cout << anotherStringArray[3] << std::endl;
	std::cout << anotherStringArray[4] << std::endl;

	Array<int>	suchEmptiness;
	try
	{
		std::cout << suchEmptiness[0] << std::endl;
	}
	catch(const Array<int>::indexException & e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	
	Array<int>	insertValues(2);
	try
	{
		insertValues[0] = 1;
		insertValues[1] = 1;
		insertValues[0] = 3;
		insertValues[2] = 1;
	}
	catch(const Array<int>::indexException & e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	std::cout << insertValues[0] << std::endl;
	std::cout << insertValues[1] << std::endl;

	//the below does not compile
	// const Array<int>	constInt(2);
	// try
	// {
	// 	constInt[0] = 5;
	// }
	// catch(const Array<int>::indexException & e)
	// {
	// 	std::cerr << BOLDRED << e.what() << RESET << std::endl;
	// }
	// std::cout << constInt[0] << std::endl;


	return (0);
}