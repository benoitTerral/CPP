/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:34:35 by bterral           #+#    #+#             */
/*   Updated: 2022/08/31 15:09:51 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

class Bureaucrat;

class AForm
{
	public:
		AForm( void );
		AForm(std::string name, unsigned int gradeSign, unsigned int	gradeExecute);
		virtual ~AForm( void );
		AForm ( AForm const& rhs);
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
		class GradeTooLowExecuteException: public std::exception
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
		class FormNotSignedException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		}
		;

		//Execute
		virtual void		execute(Bureaucrat const & executor) const = 0;
		bool				executeCheckExecutorGrade(Bureaucrat const & executor) const;

	private:
		const std::string		_name;
		bool					_isSigned;
		const unsigned int		_gradeSign;
		const unsigned int		_gradeExecute;
		AForm&	operator= ( AForm const& rhs);
}
;
std::ostream&	operator<< (std::ostream& out, const AForm& form);