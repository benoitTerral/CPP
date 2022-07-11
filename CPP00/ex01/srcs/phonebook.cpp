/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:53:36 by bterral           #+#    #+#             */
/*   Updated: 2022/07/11 10:40:18 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

int main(void)
{
	std::string 	user_input;
	bool			loop = true;

	while (loop)
	{
		std::cout << "Insert a command: ";
		std::getline(std::cin, user_input);
		if (user_input == "ADD")
			std::cout << "add received";
		else if (user_input == "SEARCH")
			std::cout << "search received";
		else if (user_input == "EXIT")
		{
			std::cout << "Good bye!" << std::endl;
			loop = false;
		}
		else
		{
			std::cout << "Incorrect input received !" << std::endl;
			std::cout << "Usage: ADD, SEARCH, EXIT" << std::endl;
		}
	}
	return (0);
}