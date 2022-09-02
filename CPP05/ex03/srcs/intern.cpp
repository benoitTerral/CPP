/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:25:22 by bterral           #+#    #+#             */
/*   Updated: 2022/09/02 09:36:25 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.h"

Intern::Intern( void )
{
	std::cout << GREEN << "Intern - default constructor called" << RESET << std::endl;
	return ;
}

Intern::Intern(Intern const & rhs)
{
	std::cout << BLUE << "Intern - Copy constructor called" << RESET << std::endl;
	*this = rhs;
	return ;
}

Intern&	Intern::operator= (const Intern & rhs)
{
	std::cout << YELLOW <<  "Intern - Assignment operator called" << RESET << std::endl;
	(void)rhs;
	return (*this);
}

Intern::~Intern( void )
{
	std::cout << RED << "Intern - Destructor called" << RESET << std::endl;
}

int	Intern::find_string(std::string str)
{
	std::string		array[3] = {"shrubbery creation", "robotmy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
	{
		if (array[i] == str)
			return (i);
	}
	return (-1);
}

AForm	*Intern::makeForm(std::string form_str, std::string target)
{
	int				form_int = find_string(form_str);

	switch (form_int)
	{
		case (-1):
			std::cout << "Form required is not correct. Forms available: shrubbery creation, robotmy request, presidential pardon" << std::endl;
			return (NULL);
		case (0):
			return (new ShrubberyCreationForm(target));
		case (1):
			return (new RobotomyRequestForm(target));
		case (2):
			return (new PresidentialPardonForm(target));
		default:
			std::cout << "Unexpected error occured !" << std::endl;
			return (NULL);		
	}
}