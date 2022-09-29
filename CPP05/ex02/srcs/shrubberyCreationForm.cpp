/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:48:18 by bterral           #+#    #+#             */
/*   Updated: 2022/09/29 13:39:10 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.h"

ShrubberyCreationForm::ShrubberyCreationForm( void ): AForm("ShrubberyCreationForm", 145, 137), _target("Undefined")
{
	std::cout << GREEN << "ShrubberyCreationForm - default constructor called" << RESET << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << GREEN << "ShrubberyCreationForm - constructor with param called" << RESET << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& rhs): AForm("ShrubberyCreationForm", 145, 137),_target(rhs.getTarget())
{
	std::cout << BLUE << "ShrubberyCreationForm - Copy constructor called" << RESET << std::endl;
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator= (const ShrubberyCreationForm& rhs)
{
	std::cout << YELLOW <<  "ShrubberyCreationForm - Assignment operator called" << RESET << std::endl;
	this->_target = rhs.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << RED << "ShrubberyCreationForm - Destructor called" << RESET << std::endl;
}

//Getters

std::string		ShrubberyCreationForm::getTarget( void ) const
{
	return this->_target;
}

//Execute function

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (this->getIsSigned() == false)
		throw FormNotSignedException();
	else if (this->executeCheckExecutorGrade(executor) == false)
		throw GradeTooLowExecuteException();
	else
	{
		std::cout << "Tree drawn by " << executor.getName() << " in file " << this->_target << "_shubbery" << std::endl;
		std::string		fileName = this->_target + "_shrubbery";
		std::ofstream 	myFile(fileName.c_str());
		//add protection
		if (!myFile)
			std::cout << RED << "Failed to draw tree by " << executor.getName() << " in file " << this->_target << "_shubbery. Check file permission." << std::endl;
		std::string	content;
		content.append( "		              v .   ._, |_  .,\n");
		content.append( "           `-._\\/  .  \\ /    |/_\n");
		content.append( "               \\  _\\, y | \\//\n");
		content.append( "         _\\_.___\\, \\/ -.\\||\n");
		content.append( "           `7-,--.`._||  / / ,\n");
		content.append( "           /'     `-. `./ / |/_.'\n");
		content.append( "                     |    |//\n");
		content.append( "                     |_    /\n");
		content.append( "                     |-   |\n");
		content.append( "                     |   =|\n");
		content.append( "                     |    |\n");
		content.append( "--------------------/ ,  . \\--------\n");
		myFile << content;
		myFile.close();
	}
}