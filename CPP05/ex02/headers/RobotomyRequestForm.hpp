/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:31:40 by bterral           #+#    #+#             */
/*   Updated: 2022/09/01 11:38:58 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.h"

class RobotomyRequestForm:  public AForm
{
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm(std::string _target);
		~RobotomyRequestForm( void );
		RobotomyRequestForm ( RobotomyRequestForm const& rhs);
		RobotomyRequestForm&	operator= ( RobotomyRequestForm const& rhs);
		std::string		getTarget( void ) const;
		void			execute(Bureaucrat const& executor) const;
	private:
		std::string	_target;
}
;