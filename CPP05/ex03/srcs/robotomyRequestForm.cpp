/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:49:15 by bterral           #+#    #+#             */
/*   Updated: 2022/09/29 14:32:00 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.h"

RobotomyRequestForm::RobotomyRequestForm( void ): AForm("RobotomyRequestForm", 72, 45), _target("Undefined")
{
	std::cout << GREEN << "RobotomyRequestForm - default constructor called" << RESET << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << GREEN << "RobotomyRequestForm - constructor with param called" << RESET << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& rhs): AForm("RobotomyRequestForm", 72, 45),_target(rhs.getTarget())
{
	std::cout << BLUE << "RobotomyRequestForm - Copy constructor called" << RESET << std::endl;
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator= (const RobotomyRequestForm& rhs)
{
	std::cout << YELLOW <<  "RobotomyRequestForm - Assignment operator called" << RESET << std::endl;
	this->_target = rhs.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << RED << "RobotomyRequestForm - Destructor called" << RESET << std::endl;
}

//Getters

std::string		RobotomyRequestForm::getTarget( void ) const
{
	return this->_target;
}

//Execute function

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (this->getIsSigned() == false)
		throw FormNotSignedException();
	else if (this->executeCheckExecutorGrade(executor) == false)
		throw GradeTooLowExecuteException();
	else
	{
		std::cout << "********* drilling noises *******" << std::endl;
		if ((rand() % 2) == 0)
			std::cout << this->getTarget() << " has been robotomized." << std::endl;
		else
			std::cout << "The robotomy has failed." << std::endl;
	}
}
