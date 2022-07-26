/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:43:05 by bterral           #+#    #+#             */
/*   Updated: 2022/07/22 15:58:35 by bterral          ###   ########.fr       */
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
		void	display_contact(void) const;
		void	display_contacts(void);
	private:
		Contact	_contact[MAX_CONTACT];
		int		_nb_contact;
};

#endif