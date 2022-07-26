/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:41:51 by bterral           #+#    #+#             */
/*   Updated: 2022/07/22 16:46:54 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

std::string	format_field(std::string str)
{
	if (str.size() > 10)
		return (str.substr(0, 9) + '.');
	else
		return (str);
}

void	Contact::display_contact_fields(int i)
{
	std::cout << std::setw(10) << i << "|";
	std::cout << std::setw(10) << format_field(this->_first_name) << "|";
	std::cout << std::setw(10) << format_field(this->_last_name) << "|";
	std::cout << std::setw(10) << format_field(this->_nickname) << std::endl;
}

std::string	Contact::get_string(int index) const
{
	switch (index)
	{
		case 0:
			return (this->_first_name);
		case 1:
			return (this->_last_name);
		case 2:
			return (this->_nickname);
		case 3:
			return (this->_phone_number);
		case 4:
			return (this->_darkest_secret);
		default:
			return (NULL);
	}
	return (NULL);
}

void	Contact::set_contact(void)
{
	int missing_info = 1;

	while (missing_info)
	{
		std::cout << "Contact first name: ";
		std::getline(std::cin, this->_first_name);
		std::cout << "Contact last name: ";
		std::getline(std::cin, this->_last_name);
		std::cout << "Contact nickname: ";
		std::getline(std::cin, this->_nickname);
		std::cout << "Contact phone number: ";
		std::getline(std::cin, this->_phone_number);
		std::cout << "Contact darkest secret: ";
		std::getline(std::cin, this->_darkest_secret);
		if (this->_first_name.empty() || this->_last_name.empty()|| this->_nickname.empty()
			|| this->_phone_number.empty() || this->_darkest_secret.empty())
			std::cout << "Empty value detected, contact insertion failed" << std::endl;
		else
			missing_info = 0;
	}
	return ;
}