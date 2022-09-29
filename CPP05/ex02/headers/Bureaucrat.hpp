/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:17:08 by bterral           #+#    #+#             */
/*   Updated: 2022/09/29 12:19:42 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

class	AForm;

class Bureaucrat
{
	public:
		Bureaucrat( void );
		~Bureaucrat( void );
		Bureaucrat( std::string name, unsigned int grade);
		Bureaucrat ( Bureaucrat const& rhs);
		Bureaucrat&	operator= ( Bureaucrat const& rhs);

		//getters
		std::string		getName( void ) const;
		unsigned int	getGrade( void ) const;

		//exceptions
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		}
		;
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		}
		;

		//Modify bureaucrat grade
		void	incrementGrade( void );
		void	decrementGrade( void );

		//form
		void	signForm(AForm &form);

		//execute
		void	executeForm(AForm const & form);

	private:
		std::string		_name;
		unsigned int	_grade;
}
;

//surchage operator << 
std::ostream&	operator<< ( std::ostream& out, const Bureaucrat& source);