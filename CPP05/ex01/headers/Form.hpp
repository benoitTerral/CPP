/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:34:35 by bterral           #+#    #+#             */
/*   Updated: 2022/09/30 13:27:23 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

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
		const std::string		_name;
		bool					_isSigned;
		const unsigned int		_gradeSign;
		const unsigned int		_gradeExecute;
}
;
std::ostream&	operator<< (std::ostream& out, const Form& form);