/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:44:09 by bterral           #+#    #+#             */
/*   Updated: 2022/09/29 12:19:33 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.h"

PresidentialPardonForm::PresidentialPardonForm( void ): AForm("PresidentialPardonForm", 25, 5), _target("Undefined")
{
	std::cout << GREEN << "PresidentialPardonForm - default constructor called" << RESET << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << GREEN << "PresidentialPardonForm - constructor with param called" << RESET << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& rhs): AForm("PresidentialPardonForm", 25, 5),_target(rhs.getTarget())
{
	std::cout << BLUE << "PresidentialPardonForm - Copy constructor called" << RESET << std::endl;
	return ;
}

PresidentialPardonForm&	PresidentialPardonForm::operator= (const PresidentialPardonForm& rhs)
{
	std::cout << YELLOW <<  "PresidentialPardonForm - Assignment operator called" << RESET << std::endl;
	this->_target = rhs.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << RED << "PresidentialPardonForm - Destructor called" << RESET << std::endl;
}

//Getters

std::string		PresidentialPardonForm::getTarget( void ) const
{
	return this->_target;
}

//Execute function

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (this->getIsSigned() == false)
		throw FormNotSignedException();
	else if (this->executeCheckExecutorGrade(executor) == false)
		throw GradeTooLowExecuteException();
	else
		std::cout << this->getTarget() << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}