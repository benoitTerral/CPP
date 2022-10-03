/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:15:17 by bterral           #+#    #+#             */
/*   Updated: 2022/10/03 15:06:35 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

int main( int argc, char **argv )
{
	std::string	arg;
	Convert	*convert;
	
	if (argc != 2)
	{
		std::cerr << BOLDRED << "One and only one argument is mandatory" << RESET << std::endl;
		return (1);
	}
	arg = argv[1];
	if (arg.empty())
	{
		std::cerr << BOLDRED << "Empty input !" << RESET << std::endl;
		return (1);
	}
	try
	{
		convert = new Convert(argv[1]);
		convert->print_char();
		convert->print_int();
		convert->print_float();
		convert->print_double();
	}
	catch (Convert::unhandledParamater& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	delete convert;
	return (0);
}