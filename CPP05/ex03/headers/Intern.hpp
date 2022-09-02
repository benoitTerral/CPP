/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:22:18 by bterral           #+#    #+#             */
/*   Updated: 2022/09/02 09:27:36 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.h"

class Intern
{
	public:
		Intern( void );
		Intern(Intern const & src);
		~Intern( void );
		Intern&	operator= (const Intern & rhs);
		AForm	*makeForm(std::string form, std::string target);
	private:
		int	find_string(std::string str);
}
;