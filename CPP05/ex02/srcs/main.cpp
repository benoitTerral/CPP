/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:15:17 by bterral           #+#    #+#             */
/*   Updated: 2022/09/29 16:34:51 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.h"

int main( void )
{
	Bureaucrat				bureaucrat0("bureaucrat0", 1);
	Bureaucrat				bureaucrat1("bureaucrat1", 150);
	Bureaucrat				bureaucrat2("bureaucrat2", 140);
	

	std::cout << std::endl << BOLDYELLOW << "   Shrubbery Tests" << RESET << std::endl;
	ShrubberyCreationForm	shrubbery("sequoia");
	bureaucrat1.signForm(shrubbery);
	bureaucrat1.executeForm(shrubbery);
	bureaucrat2.signForm(shrubbery);
	bureaucrat1.executeForm(shrubbery);
	bureaucrat2.executeForm(shrubbery);
	bureaucrat0.executeForm(shrubbery);
	try
	{
		shrubbery.execute(bureaucrat0);
	}
	catch (AForm::FormNotSignedException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch (AForm::GradeTooLowException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	try
	{
		shrubbery.execute(bureaucrat1);
	}
	catch (AForm::FormNotSignedException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch (AForm::GradeTooLowException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}

	std::cout  << std::endl << BOLDYELLOW << "   Robotomy Tests" << RESET << std::endl;
	RobotomyRequestForm	robotomyRequestForm("yoRobot");
	bureaucrat1.executeForm(robotomyRequestForm);
	bureaucrat1.signForm(robotomyRequestForm);
	bureaucrat0.signForm(robotomyRequestForm);
	bureaucrat0.executeForm(robotomyRequestForm);
	bureaucrat0.executeForm(robotomyRequestForm);
	bureaucrat0.executeForm(robotomyRequestForm);
	bureaucrat0.executeForm(robotomyRequestForm);
	bureaucrat0.executeForm(robotomyRequestForm);
	bureaucrat0.executeForm(robotomyRequestForm);
	bureaucrat0.executeForm(robotomyRequestForm);
	bureaucrat0.executeForm(robotomyRequestForm);

	std::cout << BOLDYELLOW << "   Presidential pardon" << RESET << std::endl;
	PresidentialPardonForm	presidentialPardon("bad guy");
	bureaucrat1.signForm(presidentialPardon);
	bureaucrat1.executeForm(presidentialPardon);
	bureaucrat0.signForm(presidentialPardon);
	bureaucrat1.executeForm(presidentialPardon);
	bureaucrat0.executeForm(presidentialPardon);

	return (0);	
}