/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:21:46 by bterral           #+#    #+#             */
/*   Updated: 2022/08/30 11:17:28 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.h"

Bureaucrat::Bureaucrat( void ): _name("Undefined"),_grade(150)
{
	std::cout << GREEN << "Bureaucrat - default constructor called" << RESET << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( std::string name, unsigned int grade)
{
	std::cout << GREEN << "Bureaucrat - constructor with param called" << RESET << std::endl;
	// try
	// {
		if (grade < 1)
			throw	GradeTooHighException();
		else if (grade > 150)
			throw	GradeTooLowException();
		else
			this->_grade = grade;
		this->_name = name;
	// }
	// catch( GradeTooHighException& e)
	// {
	// 	std::cerr << BOLDRED << e.what() << RESET << std::endl;
	// 	return ;
	// }
	// catch( GradeTooLowException& e)
	// {
	// 	std::cerr << BOLDRED << e.what() << RESET << std::endl;
	// 	return ;
	// }
	// catch (std::exception& e)
	// {
	// 	return ;
	// }
}

Bureaucrat::Bureaucrat(Bureaucrat const& rhs): _name(rhs.getName()),_grade(rhs._grade)
{
	std::cout << BLUE << "Bureaucrat - Copy constructor called" << RESET << std::endl;
	return ;
}

Bureaucrat&	Bureaucrat::operator= (const Bureaucrat& rhs)
{
	std::cout << YELLOW <<  "Bureaucrat - Assignment operator called" << RESET << std::endl;
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << RED << "Bureaucrat - Destructor called" << RESET << std::endl;
}

//Getters

std::string		Bureaucrat::getName( void ) const
{
	return this->_name;
}

unsigned int	Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

//exceptions

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Top grade is 1 !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
		return ("Lowest grade is 150 !");
}

//Modify bureaucrat grade

void	Bureaucrat::incrementGrade( void )
{
	// try
	// {
		if ((this->_grade - 1) < 1)
			throw GradeTooHighException();
		else
			this->_grade--;
	// }
	// catch( GradeTooHighException& e)
	// {
	// 	std::cerr << BOLDRED << "Exception called in incrementGrade: " << e.what() << RESET << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
}

void	Bureaucrat::decrementGrade( void )
{
	// try
	// {
		if ((this->_grade + 1) > 150)
			throw GradeTooLowException();
		else
			this->_grade++;
	// }
	// catch( GradeTooLowException& e)
	// {
	// 	std::cerr << BOLDRED << "Exception called in decrementGrade: " << e.what() << RESET << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
}

std::ostream&	operator<< ( std::ostream& out, const Bureaucrat& source)
{
	out << source.getName() << ", bureaucrat grade " << source.getGrade();
	return (out);
}