/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:15:17 by bterral           #+#    #+#             */
/*   Updated: 2022/09/29 16:15:13 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.h"

int main( void )
{
	Intern	intern0;
	AForm*	shrubbery;
	AForm*	robot;
	AForm*	president;
	AForm*	fake_president;

	Bureaucrat	bureaucrat = Bureaucrat("CAF", 1);
	
	try
	{
		shrubbery = intern0.makeForm("shrubbery creation", "tree");
		bureaucrat.signForm(*shrubbery);
	}
	catch(const Intern::FormTypeException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	
	try
	{
		robot = intern0.makeForm("robotmy request", "bender");
		bureaucrat.signForm(*robot);
	}
	catch(const Intern::FormTypeException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}

	try
	{
		president = intern0.makeForm("presidential pardon", "Macron");
		bureaucrat.signForm(*president);
	}
	catch(const Intern::FormTypeException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	
	try
	{
		fake_president = intern0.makeForm("dummy form", "dummy");
		bureaucrat.signForm(*fake_president);
	}
	catch(const Intern::FormTypeException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	
	

	// test.executeForm(*fake_president);

	

	delete shrubbery;
	delete robot;
	delete president;
	delete fake_president;
	return (0);	
}