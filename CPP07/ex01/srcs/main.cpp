/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:15:17 by bterral           #+#    #+#             */
/*   Updated: 2022/09/06 14:11:43 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
	int		int_array[3] = {2, 3, 4};
	float	float_array[3] = {2.69, 3.2, 4.44};
	float	double_array[2] = {1000000, -69.3};

	array_mod<int>(int_array, 3, time_two);
	array_mod(float_array, 3, time_two);
	array_mod(double_array, 2, time_two);

	return (0);
}