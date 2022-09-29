/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:50:19 by bterral           #+#    #+#             */
/*   Updated: 2022/09/29 12:08:19 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.h"

Form::Form( void ): _name("Undefined"),_isSigned(false),_gradeSign(150),_gradeExecute(150)
{
	std::cout << GREEN << "Form - default constructor called" << RESET << std::endl;
	return ;
}

Form::Form(std::string name, unsigned int gradeSign, unsigned int gradeExecute): _name(name),_isSigned(false)
{
	std::cout << GREEN << "Form - constructor with param called" << RESET << std::endl;
	if (gradeSign < 1 || gradeExecute < 1)
		throw	GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw	GradeTooLowException();
	else
	{
		this->_gradeSign = gradeSign;
		this->_gradeExecute = gradeExecute;
	}
	return ;
}

Form::Form(Form const& rhs): _name(rhs.getName()),_isSigned(false),_gradeSign(rhs.getGradeSign()),_gradeExecute(rhs.getGradeExecute())
{
	std::cout << BLUE << "Form - Copy constructor called" << RESET << std::endl;
	return ;
}

Form&	Form::operator= (const Form& rhs)
{
	std::cout << YELLOW <<  "Form - Assignment operator called" << RESET << std::endl;
	this->_name = rhs.getName();
	this->_isSigned = false;
	this->_gradeSign = rhs.getGradeSign();
	this->_gradeExecute = rhs.getGradeExecute();
	return (*this);
}

Form::~Form( void )
{
	std::cout << RED << "Form - Destructor called" << RESET << std::endl;
}

//Getters

std::string		Form::getName( void ) const
{
	return this->_name;
}

bool			Form::getIsSigned( void ) const
{
	return this->_isSigned;
}

unsigned int	Form::getGradeSign( void ) const
{
	return this->_gradeSign;
}

unsigned int	Form::getGradeExecute( void ) const
{
	return this->_gradeExecute;
}

//Exception

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low to sign this form");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high to sign this form");
}

//beSigned

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	else
		this->_isSigned = true;
}

//surchage <<

std::ostream&	operator<< ( std::ostream& out, const Form& source)
{
	out << std::boolalpha << source.getName() << ", is signed " << source.getIsSigned() << ", signature level required " << source.getGradeSign() << ", execute level required " << source.getGradeExecute();
	return (out);
}

