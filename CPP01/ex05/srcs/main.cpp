/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:55:15 by bterral           #+#    #+#             */
/*   Updated: 2022/08/11 16:08:17 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main ( void )
{
	Harl	harl;
	std::cout << BOLDWHITE << "Error level" << RESET << std::endl;
	harl.complain("ERROR");
	std::cout << BOLDWHITE << "Warning level" << RESET << std::endl;
	harl.complain("WARNING");
	std::cout << BOLDWHITE << "Info level" << RESET << std::endl;
	harl.complain("INFO");
	std::cout << BOLDWHITE << "Debug level" << RESET << std::endl;
	harl.complain("DEBUG");
	std::cout << BOLDWHITE << "Garbage input" << RESET << std::endl;
	harl.complain("DEBUGGGGGGGG");
	std::cout << BOLDWHITE << "Empty input" << RESET << std::endl;
	harl.complain("");
	return (0);
}