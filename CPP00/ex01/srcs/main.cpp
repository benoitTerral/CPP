/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:02:37 by bterral           #+#    #+#             */
/*   Updated: 2022/07/22 16:47:25 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

int main(void)
{
	std::string 	user_input;
	bool			loop = true;
	Phone_book		phone_book;
	// Contact			test_contact;

	while (loop)
	{
		std::cout << "Insert a command: ";
		std::getline(std::cin, user_input);
		if (user_input == "ADD")
			phone_book.add_contact();
		else if (user_input == "SEARCH")
			phone_book.display_contact();
		else if (user_input == "EXIT")
		{
			std::cout << "Good bye!" << std::endl;
			loop = false;
		}
		else if (user_input.empty())
			std::cout << "Input is empty" << std::endl;
		else
		{
			std::cout << "Incorrect input received !" << std::endl;
			std::cout << "Usage: ADD, SEARCH, EXIT" << std::endl;
		}
	}
	return (0);
}