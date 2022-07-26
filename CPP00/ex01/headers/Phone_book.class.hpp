/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:43:05 by bterral           #+#    #+#             */
/*   Updated: 2022/07/26 14:04:05 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP
# include "phone_book.hpp"
# define MAX_CONTACT 8

class Phone_book
{
	public:
		Phone_book(void): _nb_contact(0) {};
		~Phone_book(void) {};
		void	add_contact(void);
		void	display_contacts(void);
		void	display_contacts_details(std::string user_input);
	private:
		Contact	_contact[MAX_CONTACT];
		int		_nb_contact;
};

#endif