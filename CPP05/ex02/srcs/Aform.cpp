/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:50:19 by bterral           #+#    #+#             */
/*   Updated: 2022/09/30 12:15:43 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.h"

AForm::AForm( void ): _name("Undefined"),_isSigned(false),_gradeSign(150),_gradeExecute(150)
{
	std::cout << GREEN << "AForm - default constructor called" << RESET << std::endl;
	return ;
}

AForm::AForm(std::string name, unsigned int gradeSign, unsigned int gradeExecute):  _name(name),_isSigned(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	std::cout << GREEN << "Form - constructor with param called" << RESET << std::endl;
	if (gradeSign < 1 || gradeExecute < 1)
		throw	GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw	GradeTooLowException();
	return ;
}

AForm::AForm(AForm const& rhs): _name(rhs.getName()),_isSigned(false),_gradeSign(rhs.getGradeSign()),_gradeExecute(rhs.getGradeExecute())
{
	std::cout << BLUE << "AForm - Copy constructor called" << RESET << std::endl;
	return ;
}

AForm&	AForm::operator= (const AForm& rhs)
{
	std::cout << YELLOW <<  "AForm - Assignment operator called" << RESET << std::endl;
	(void)rhs;
	return (*this);
}

AForm::~AForm( void )
{
	std::cout << RED << "AForm - Destructor called" << RESET << std::endl;
}

//Getters

std::string		AForm::getName( void ) const
{
	return this->_name;
}

bool			AForm::getIsSigned( void ) const
{
	return this->_isSigned;
}

unsigned int	AForm::getGradeSign( void ) const
{
	return this->_gradeSign;
}

unsigned int	AForm::getGradeExecute( void ) const
{
	return this->_gradeExecute;
}

//Exception

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low to sign this form");
}

const char* AForm::GradeTooLowExecuteException::what() const throw()
{
	return ("Grade is too low to execute this form");
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high to sign this form");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("Form cannnot be executed as it has not been signed yet");
}

//beSigned

void	AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	else
		this->_isSigned = true;
}

//surchage <<

std::ostream&	operator<< ( std::ostream& out, const AForm& source)
{
	out << std::boolalpha << source.getName() << ", is signed " << source.getIsSigned() << ", signature level required " << source.getGradeSign() << ", execute level required " << source.getGradeExecute();
	return (out);
}

//execute

bool	AForm::executeCheckExecutorGrade(Bureaucrat const & executor) const
{
	if (this->getGradeExecute() < executor.getGrade())
		return false;
	else
		return true;
}