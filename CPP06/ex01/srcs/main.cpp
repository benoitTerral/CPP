/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:15:17 by bterral           #+#    #+#             */
/*   Updated: 2022/10/03 14:50:45 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.h"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main( void )
{
	Data	test;
	uintptr_t	serialized = serialize(&test);

	test._data0 = 1;
	test._data1 = 2;

	Data*	deserialized = deserialize(serialized);
	
	std::cout << deserialized->_data0 << std::endl;
	std::cout << deserialized->_data1 << std::endl;
	return (0);
}

