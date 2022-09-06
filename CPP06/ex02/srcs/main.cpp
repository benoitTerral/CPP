/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:15:17 by bterral           #+#    #+#             */
/*   Updated: 2022/09/06 15:29:40 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.h"

Base * generate(void)
{
	int	random;

	srand(time(NULL));
	random = rand() % 3;
	std::cout << random << std::endl;

	switch (random)
	{
		case 0:
			return(static_cast<Base*>(new A()));
		case 1:
			return(static_cast<Base*>(new B()));
		case 2:
			return(static_cast<Base*>(new C()));
		default:
			return (NULL);
	}
}

void identify(Base* p)
{
	void	*ptr[3];

	ptr[0] = dynamic_cast<A*>(p);
	ptr[1] = dynamic_cast<B*>(p);
	ptr[2] = dynamic_cast<C*>(p);
	
	for (int i = 0; i < 3; i++)
	{
		if (ptr[i])
		{
			switch (i)
			{
				case 0:
					std::cout << "Pointer p is of class A" << std::endl;
					return ;
					break;
				case 1:
					std::cout << "Pointer p is of class B" << std::endl;
					return ;
					break;
				case 2:
					std::cout << "Pointer p is of class C" << std::endl;
					return ;
					break;
				default:
					std::cout << "Unknown" << std::endl;
			}
		}
	}
	std::cout << "Unknown" << std::endl;
	return ;
}

void	identify(Base& p)
{
	try {
		A &refA = dynamic_cast<A&>(p);
		(void)refA;
		std::cout << "Reference of p is class A" << std::endl;
	}
	catch (std::bad_cast &bc) {}

	try {
		B &refB = dynamic_cast<B&>(p);
		(void)refB;
		std::cout << "Reference of p is class B" << std::endl;
	}
	catch (std::bad_cast &bc) {}

	try {
		C &refC = dynamic_cast<C&>(p);
		(void)refC;
		std::cout << "Reference of p is class C" << std::endl;
	}
	catch (std::bad_cast &bc) {}
}

int main ( void )
{
	Base *random_ptr = generate();
	Base &random_ref = *random_ptr;
	// (void)random_ref;
	identify(random_ptr);
	identify(random_ref);


	delete (random_ptr);
	// for (int i = 0; i < 10; i++)
	// {
	// 	Base *random_ptr = generate();
	// 	Base &random_ref = *random_ptr;


	// 	identify(random_ptr);
	// 	identify(random_ref);

	// 	std::cout << std::endl;

	// 	delete (random_ptr);
	// }
}