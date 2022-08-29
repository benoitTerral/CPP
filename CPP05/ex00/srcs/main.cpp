/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:15:17 by bterral           #+#    #+#             */
/*   Updated: 2022/08/29 16:47:36 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.h"

int main( void )
{
	Bureaucrat	bureaucrat0;
	Bureaucrat	bureaucrat1("bureaucrat1", 149);
	Bureaucrat	bureaucrat2("bureaucrat2", 1);
	Bureaucrat	bureaucrat3("bureaucrat2", 0);
	Bureaucrat	bureaucrat4("bureaucrat4", 160);
	Bureaucrat	bureaucrat5("bureaucrat4", 150);

	bureaucrat1.decrementGrade();
	bureaucrat4.decrementGrade();

	return (0);
}