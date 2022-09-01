/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:34:35 by bterral           #+#    #+#             */
/*   Updated: 2022/08/31 15:09:51 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.h"

class Bureaucrat;

class Form
{
	public:
		Form( void );
		Form(std::string name, unsigned int gradeSign, unsigned int	gradeExecute);
		~Form( void );
		Form ( Form const& rhs);
		Form&	operator= ( Form const& rhs);
		void	beSigned(Bureaucrat const &bureaucrat);

		//getters
		std::string		getName( void ) const;
		bool			getIsSigned( void ) const;
		unsigned int	getGradeSign( void ) const;
		unsigned int	getGradeExecute( void ) const;

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		}
		;
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		}
		;

	private:
		std::string		_name;
		bool			_isSigned;
		unsigned int	_gradeSign;
		unsigned int	_gradeExecute;

}
;
std::ostream&	operator<< (std::ostream& out, const Form& form);