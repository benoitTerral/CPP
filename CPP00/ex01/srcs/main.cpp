/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:02:37 by bterral           #+#    #+#             */
/*   Updated: 2022/09/08 16:39:49 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

int main(void)
{
	std::string 	user_input;
	bool			loop = true;
	Phone_book		phone_book;

	while (loop)
	{
		std::cout << BOLDGREEN << "Insert a command: " << RESET;
		std::getline(std::cin, user_input);
		if (user_input == "ADD")
			phone_book.add_contact();
		else if (user_input == "SEARCH")
			phone_book.display_contacts();
		else if (user_input == "EXIT" || std::cin.eof())
		{
			std::cout << "Good bye!" << std::endl << std::endl;
			loop = false;
		}
		else if (user_input.empty())
			std::cout << BOLDRED << "Input is empty" << RESET << std::endl << std::endl;
		else
		{
			std::cout << BOLDRED << "Incorrect input received !" << RESET << std::endl;
			std::cout << BOLDRED << "Usage: ADD, SEARCH, EXIT" << RESET << std::endl << std::endl;
		}
	}
	return (0);
}