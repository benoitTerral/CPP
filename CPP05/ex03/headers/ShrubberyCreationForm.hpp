/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:29:31 by bterral           #+#    #+#             */
/*   Updated: 2022/08/31 15:43:41 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

class ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm(std::string _target);
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm ( ShrubberyCreationForm const& rhs);
		ShrubberyCreationForm&	operator= ( ShrubberyCreationForm const& rhs);
		std::string		getTarget( void ) const;
		void			execute(Bureaucrat const& executor) const;
		

	private:
		std::string	_target;
}
;