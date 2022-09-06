/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:53:36 by bterral           #+#    #+#             */
/*   Updated: 2022/09/06 11:40:50 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

void	Phone_book::add_contact(void)
{
	for (int i = (this->_nb_contact == MAX_CONTACT ? MAX_CONTACT - 1 : _nb_contact); i > 0; i--)
		this->_contact[i] = this->_contact[i - 1];
	this->_contact[0].set_contact();
	if (this->_nb_contact < MAX_CONTACT)
		this->_nb_contact++;
	return ;
}

void	Phone_book::display_contacts_details(std::string user_input)
{
	int	value;

	for (size_t i = 0; i < user_input.size(); i++)
	{
		if (!isdigit(user_input[i]))
		{
			if (_nb_contact == 0)
				std::cout << BOLDRED << "Query failed: Id does not exist" << RESET << std::endl << std::endl;
			return ;
		}
	}
	value = atoi(user_input.c_str());
	if (value < 0 || value > (_nb_contact - 1))
	{
		std::cout << BOLDRED << "Query failed: Id consists of digits between 0 and " << _nb_contact - 1 << " (max contact ID)" << RESET << std::endl << std::endl;
		return ;
	}
	std::cout << YELLOW << "First name      : " << this->_contact[value].get_string(0) << RESET << std::endl;
	std::cout << YELLOW << "Last name       : " << this->_contact[value].get_string(1) << RESET << std::endl;
	std::cout << YELLOW << "Nickname        : " << this->_contact[value].get_string(2) << RESET << std::endl;
	std::cout << YELLOW << "Phone Number    : " << this->_contact[value].get_string(3) << RESET << std::endl;
	std::cout << YELLOW << "Darkest secret  : " << this->_contact[value].get_string(4) << RESET << std::endl << std::endl;
}

void	Phone_book::display_contacts(void)
{
	std::string user_input;

	std::cout << std::endl << "          DISPLAYING ALL CONTACTS            " << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "|   ----   |   ----   |   ----   |   ----   |" << std::endl;
	for (int i = 0; i < _nb_contact; i++)
		this->_contact[i].display_contact_fields(i);
	std::cout << "---------------------------------------------" << std::endl << std::endl;
	std::cout << std::endl << BOLDGREEN <<"Insert contact ID to get full info: " << RESET;
	std::getline(std::cin, user_input);
	Phone_book::display_contacts_details(user_input);
}