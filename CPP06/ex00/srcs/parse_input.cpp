/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:06:38 by bterral           #+#    #+#             */
/*   Updated: 2022/10/03 14:32:34 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/convert.h"

bool	Convert::isChar(std::string arg) const
{
	if ((arg[0] >= 0 && arg[0] <= 127) && !arg[1])
		return true;
	return (false);
}

//add limits ??
bool	Convert::isInt(std::string arg) const
{
	if (arg[0] != '-' && arg[0] < '0' && arg[0] > '9')
		return false;
	if (arg[0] == '-' && arg.length() == 1)
		return false;
	int	i = 1;
	while (arg[i])
	{
		if (arg[i] >= '0' && arg[i] <= '9')
			i++;
		else
			return false;
	}
	return true;
}

bool	Convert::isDouble(std::string arg) const
{
	int	dot = 0;

	if (arg[0] != '-' && arg[0] < '0' && arg[0] > '9')
		return false;
	if (arg[0] == '-' && arg.length() == 1)
		return false;
	int	i = 1;
	while (arg[i])
	{
		if (arg[i] >= '0' && arg[i] <= '9')
			i++;
		else if (arg[i] == '.' && dot == 0)
		{
			dot++;
			i++;
		}
		else
			return false;
	}
	if (arg [i - 1] == '.')
		return false;
	return true;
}

bool	Convert::isfloat(std::string arg) const
{
	int	dot = 0;

	if (arg[0] != '-' && arg[0] < '0' && arg[0] > '9')
		return false;
	if (arg[0] == '-' && arg.length() == 1)
		return false;
	unsigned int	i = 1;
	while (i < (arg.length() - 1))
	{
		if (arg[i] >= '0' && arg[i] <= '9')
			i++;
		else if (arg[i] == '.' && dot == 0)
		{
			dot++;
			i++;
		}
		else
			return false;
	}
	if (arg[i] != 'f')
		return false;
	return true;
}

double	Convert::convert_float_limit(std::string literal)
{
	if (literal == "nanf")
		return (strtod("nan", NULL));
	else if (literal == "-inff")
		return (strtod("-inf", NULL));
	else if (literal == "+inff")
		return (strtod("+inf", NULL));
	else
		return (0);
}