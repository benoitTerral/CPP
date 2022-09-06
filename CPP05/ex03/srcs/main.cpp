/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:15:17 by bterral           #+#    #+#             */
/*   Updated: 2022/09/05 15:31:56 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.h"

int main( void )
{
	Intern	intern0;
	AForm*	shrubbery;
	AForm*	robot;
	AForm*	president;
	AForm*	fake_president;

	shrubbery = intern0.makeForm("shrubbery creation", "tree");
	robot = intern0.makeForm("robotmy request", "bender");
	president = intern0.makeForm("presidential pardon", "Macron");
	fake_president = intern0.makeForm("dummy form", "dummy");

	Bureaucrat	bureaucrat = Bureaucrat("john", 1);
	bureaucrat.signForm(*shrubbery);

	delete shrubbery;
	delete robot;
	delete president;
	delete fake_president;
	return (0);	
}