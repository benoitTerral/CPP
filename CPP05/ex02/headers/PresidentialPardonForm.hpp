/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:31:36 by bterral           #+#    #+#             */
/*   Updated: 2022/09/29 12:19:45 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

class PresidentialPardonForm:  public AForm
{
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm(std::string _target);
		~PresidentialPardonForm( void );
		PresidentialPardonForm ( PresidentialPardonForm const& rhs);
		PresidentialPardonForm&	operator= ( PresidentialPardonForm const& rhs);
		std::string		getTarget( void ) const;
		void			execute(Bureaucrat const& executor) const;

	private:
		std::string	_target;
}
;