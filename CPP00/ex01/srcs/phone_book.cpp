/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:53:36 by bterral           #+#    #+#             */
/*   Updated: 2022/07/22 16:47:57 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

void	Phone_book::add_contact(void)
{
	for (int i = this->_nb_contact; i > 0; i--)
		this->_contact[i] = this->_contact[i - 1];
	this->_contact[0].set_contact();
	if (this->_nb_contact < MAX_CONTACT)
		this->_nb_contact++;
	return ;
}

void	Phone_book::display_contacts(void)
{
	std::cout << "          DISPLAYING ALL CONTACTS            " << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	for (int i = 0; i < _nb_contact; i++)
		this->_contact[i].display_contact_fields(i);
	std::cout << "---------------------------------------------" << std::endl;
}