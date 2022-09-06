/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 13:45:06 by bterral           #+#    #+#             */
/*   Updated: 2022/09/06 11:32:50 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else if (argv)
	{
		for (int i = 1; i < argc; i++)
		{
			for (size_t j = 0; j < strlen(argv[i]); j++)
			{
				std::cout << static_cast<char>(std::toupper(argv[i][j]));
			}
		}
	}
	std::cout << std::endl;
	return (0);
}