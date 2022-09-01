/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:22:18 by bterral           #+#    #+#             */
/*   Updated: 2022/09/01 13:27:04 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.h"

class Intern:
{
	public:
		Intern( void );
		Intern(Intern const & src);
		~Intern( void );
		Intern ( Intern const& rhs);
		AForm	*makeForm(std::string form, std::string target) const;
	private:
		maform
}