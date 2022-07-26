/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:34:01 by bterral           #+#    #+#             */
/*   Updated: 2022/07/26 14:03:51 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

class Contact
{
	public:
		Contact(void) {};
		~Contact(void) {};
		void		set_contact(void);
		std::string	get_string(int index) const;
		void		display_contact_fields(int i);
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};