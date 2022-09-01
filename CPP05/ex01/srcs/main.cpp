/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:15:17 by bterral           #+#    #+#             */
/*   Updated: 2022/08/31 15:12:48 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.h"

int main( void )
{
	Form	*form45a;

	Bureaucrat	*bureaucrat1;
	Bureaucrat	*bureaucrat2;

	form45a = new Form("form45a", 30, 45);
	std::cout << *form45a << std::endl;
	bureaucrat1 = new Bureaucrat("bureaucrat1", 50);
	bureaucrat2 = new Bureaucrat("bureaucrat2", 1);
	bureaucrat1->signForm(*form45a);

	try
	{
		form45a->beSigned(*bureaucrat1);
	}
	catch( Form::GradeTooLowException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << *form45a << std::endl;
	bureaucrat2->signForm(*form45a);
	std::cout << *form45a << std::endl;

	delete form45a;
	delete bureaucrat1;
	delete bureaucrat2;
	
	return (0);
}