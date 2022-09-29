/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:15:17 by bterral           #+#    #+#             */
/*   Updated: 2022/09/29 17:12:25 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int main( void )
{
	try
	{
		std::cout << std::endl << BOLDBLUE << "Inserting Bureaucrat0" << RESET << std::endl;
		Bureaucrat	bureaucrat0;
		std::cout << bureaucrat0 << std::endl;
	}
	catch( Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch( Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << std::endl << BOLDBLUE << "Inserting Bureaucrat1" << RESET << std::endl;
		Bureaucrat	bureaucrat1("bureaucrat1", 149);
		std::cout << bureaucrat1 << std::endl;
		bureaucrat1.decrementGrade();
		std::cout << bureaucrat1 << std::endl;
	}
	catch( Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch( Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << std::endl << BOLDBLUE << "Inserting Bureaucrat2" << RESET << std::endl;
		Bureaucrat	bureaucrat2("bureaucrat2", 1);
		std::cout << bureaucrat2 << std::endl;
	}
	catch( Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch( Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << std::endl << BOLDBLUE << "Inserting Bureaucrat3" << RESET << std::endl;
		Bureaucrat	bureaucrat3("bureaucrat3", 0);
		std::cout << bureaucrat3 << std::endl;
	}
	catch( Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch( Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << std::endl << BOLDBLUE << "Inserting Bureaucrat4" << RESET << std::endl;
		Bureaucrat	bureaucrat4("bureaucrat4", 150);
		std::cout << bureaucrat4 << std::endl;
		bureaucrat4.decrementGrade();
		std::cout << bureaucrat4 << std::endl;
	}
	catch( Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch( Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << std::endl << BOLDBLUE << "Inserting Bureaucrat5" << RESET << std::endl;
		Bureaucrat	bureaucrat5("bureaucrat5", 160);
		std::cout << bureaucrat5 << std::endl;
	}
	catch( Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch( Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << std::endl << BOLDBLUE << "Inserting Bureaucrat6" << RESET << std::endl;
		Bureaucrat	bureaucrat6("bureaucrat6", 150);
		std::cout << bureaucrat6 << std::endl;
	}
	catch( Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch( Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Bureaucrat	*bureaucrat7;

	try
	{
		std::cout << std::endl << BOLDBLUE << "Inserting Heap Bureaucrat7" << RESET << std::endl;
		bureaucrat7 = new Bureaucrat("bureaucrat7", 70);
	}
	catch( Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch( Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << *bureaucrat7 << std::endl;
	delete bureaucrat7;


	try
	{
		std::cout << std::endl << BOLDBLUE << "Inserting Bureaucrat9 by operator=" << RESET << std::endl;
		Bureaucrat	bureaucrat8("Carlos", 5);
		Bureaucrat	bureaucrat9;
		bureaucrat9 = bureaucrat8;
		std::cout << bureaucrat9 << std::endl;
	}
	catch( Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch( Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}