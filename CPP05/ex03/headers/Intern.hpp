/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:22:18 by bterral           #+#    #+#             */
/*   Updated: 2022/09/29 15:58:51 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

class Intern
{
	public:
		Intern( void );
		Intern(Intern const & src);
		~Intern( void );
		Intern&	operator= (const Intern & rhs);
		AForm	*makeForm(std::string form, std::string target);
		class FormTypeException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		}
		;
	private:
		int	find_string(std::string str);
}
;