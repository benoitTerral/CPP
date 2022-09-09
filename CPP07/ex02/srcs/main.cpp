/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:15:17 by bterral           #+#    #+#             */
/*   Updated: 2022/09/09 17:27:01 by bterral          ###   ########.fr       */
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

	return (0);
}