/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:15:17 by bterral           #+#    #+#             */
/*   Updated: 2022/09/29 12:06:48 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.h"

int main( void )
{
	Form	*form45a;

	Bureaucrat	*bureaucrat1;
	Bureaucrat	*bureaucrat2;

	form45a = new Form("form45a", 30, 45);
	std::cout << *form45a << std::endl;
	bureaucrat1 = new Bureaucrat("bureaucrat1", 50);
	bureaucrat2 = new Bureaucrat("bureaucrat2", 1);
	std::cout << *bureaucrat1 << std::endl;
	std::cout << *bureaucrat2 << std::endl;

	std::cout << std::endl << MAGENTA << "bureaucrat1 sign forms form45a" << RESET << std::endl;
	try
	{
		bureaucrat1->signForm(*form45a);
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl << MAGENTA << "form45a besigned by bureaucrat1" << RESET << std::endl;
	try
	{
		form45a->beSigned(*bureaucrat1);
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << *form45a << std::endl;

	std::cout << std::endl << MAGENTA << "bureaucrat1 sign forms form45a" << RESET << std::endl;
	try
	{
		bureaucrat2->signForm(*form45a);
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << *form45a << std::endl;


	std::cout << std::endl;
	Form	*form46a = new Form("form46a", 30, 45);
	std::cout << *form46a << std::endl;
	std::cout << std::endl << MAGENTA << "form46a besigned by bureaucrat2" << RESET << std::endl;
	try
	{
		form46a->beSigned(*bureaucrat2);
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << *form46a << std::endl;

	delete form45a;
	delete form46a;
	delete bureaucrat1;
	delete bureaucrat2;
	
	return (0);
}